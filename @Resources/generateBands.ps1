function Update {

}

# directories & files
$mainBandFile = "$($RmAPI.VariableStr('@'))includes\bands.inc"
$peakBandFile = "$($RmAPI.VariableStr('@'))includes\peakBands.inc"
$stringVariablesFile = "$($RmAPI.VariableStr('@'))includes\string.inc"
$containerFile = "$($RmAPI.VariableStr('@'))includes\mainContainer.inc"
$peakContainerFile = "$($RmAPI.VariableStr('@'))includes\peakContainer.inc"

# variables from Rainmeter
$B = $RmAPI.Variable("Bands")
$Length = $RmAPI.Variable("Length")
$str = $RmAPI.VariableStr("String")

# Script variables
$mainLinesTo = ""
$peakShapes = ""
$bands = ""
$peakBands = ""

function Construct {

    $RmAPI.Log('Constructing bands.inc')
    $RmAPI.Log('Constructing container.inc')

$bands += @"
[xCalc]
Measure=Calc
Formula=([amogus:W] - [xKerning]) * 1
DynamicVariables=1
UpdateDivider=-1

"@

for ($i = 0; $i -lt $B; $i++) {
    
    # Bands
    $bands += New-Band($i)
    # Band container
    $mainLinesTo += " | LineTo ([xCalc] * $($i)),[yCalc$($i)] "
    $mainLinesTo += " | LineTo ([xCalc] * $($i + 1)),[yCalc$($i)]"

    # Peak bands
    $peakBands += New-PeakBand($i)
    # Peaks
    if (($i -gt 0) -and ($i -lt $B -1)) {
        $j = $i + 1
        $peakShapes += "Shape$($j) = Rectangle ([xCalc] * $($i)),([pyCalc$($i)]),[xCalc],([amogus:H] - [yKerning]) | Extend Styles`n"
    }

}

    $container = @"
[MainContainer]
Meter=Shape
Shape=Path VisPath | Fill Color 255,0,255,255 | StrokeWidth 0
VisPath=0,([grid:H]) | LineTo 0,([yCalc0]) $($mainLinesTo) | LineTo ([grid:W] + #MagicNumber#),[grid:H]
DynamicVariables=1
x=0
y=0
"@

    $peakContainer = @"
[PeakContainer]
Meter=Shape
DynamicVariables=1
Styles=StrokeWidth 0 | Fill Color 255,255,0
Shape=Rectangle 0,([pyCalc0]),[xCalc],([amogus:H] + [yKerning]) | Extend Styles
$($peakshapes)

"@

    New-String
    $bands | Out-File -FilePath $mainBandFile
    $peakBands | Out-File -FilePath $peakBandFile
    $container | Out-File -FilePath $containerFile
    $peakContainer | Out-File -FilePath $peakContainerFile
}

###############
## functions ##
###############

function New-Band($i) {
    # $RmAPI.Log("Making band$($i).inc")

    $band = @"
[sBand$i]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=$($i + 1)
AverageSize=#AverageSize#
[yCalc$i]
Measure=Calc
Formula=[grid:H] - (([amogus:H] - [yKerning]) * Floor(sBand$i * $($Length - 1)))
DynamicVariables=1

"@

    return $band
}

function New-PeakBand($i) {
    # $RmAPI.Log("Making peakBand$($i).inc")

    $band = @"
[pBand$i]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasurePeaks
Type=Band
BandIdx=$($i + 1)
AverageSize=#AverageSize#
UpdateDivider=#PeakUpdateDivider#
[pyCalc$i]
Measure=Calc
Formula=[grid:H] - (([amogus:H] - [yKerning]) * (Floor(pBand$i * $($Length - 1)) + 1))
DynamicVariables=1
UpdateDivider=#PeakUpdateDivider#

"@

    return $band
}


function New-String {
    $RmAPI.Log('Constructing string.inc')

    $s = ""
    $total = $Length * $B
    for ($j = 0; $j -lt $Total; $j++) {
        if (($j % $B -eq 0) -and ( $j -ne 0)) {
            $s += "#CRLF#"
        } 
        $s += $str
    }
    
    $stringVariables += @"
[Variables]
sString = $s

"@

    $stringVariables | Out-File -FilePath $stringVariablesFile

}
