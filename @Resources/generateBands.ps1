function Update {

}

# directories & files
$mainBandFile = "$($RmAPI.VariableStr('@'))includes\bands.inc"
$stringVariablesFile = "$($RmAPI.VariableStr('@'))includes\string.inc"

# variables from RmAPI
$Bands = $RmAPI.Variable("Bands")
$Length = $RmAPI.Variable("Length")
$str = $RmAPI.VariableStr("String")

function Construct {

    New-String

    $RmAPI.Log('Constructing bands.inc')

$bandsString = @"
[xCalc]
Measure=Calc
Formula=([amogus:W] - [xKerning]) * 1
DynamicVariables=1
UpdateDivider=-1

"@
$linesTo = ""

# Formula=$($i + 1) * [amogus:W] - (($i + 1) * [xKerning])

for ($i = 0; $i -lt $Bands; $i++) {
    
    $bandsString += @"
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

    $linesTo += " | LineTo ([xCalc] * $($i)),[yCalc$($i)] "
    $linesTo += " | LineTo ([xCalc] * $($i + 1)),[yCalc$($i)]"

}

    $container = @"
[container]
Meter=Shape
Shape=Path VisPath | Fill Color 255,0,255,255 | StrokeWidth 0
VisPath=0,([grid:H]) | LineTo 0,([yCalc0]) $($linesTo) | LineTo ([grid:W] + #MagicNumber#),[grid:H]
DynamicVariables=1
x=0
y=0
"@

    $bandsString += $container

    $bandsString | Out-File -FilePath $mainBandFile
}

function New-String {
    $RmAPI.Log('Constructing string.inc')

    $s = ""
    $total = $Length * $Bands
    for ($j = 0; $j -lt $Total; $j++) {
        if (($j % $Bands -eq 0) -and ( $j -ne 0)) {
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