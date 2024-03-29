; ; Old measures

; [MeasureAudio]
; Measure=Plugin
; Plugin=AudioLevel
; Port=Output
; Bands=(#Bands# + 1)
; Sensitivity=#Sensitivity#
; FFTSize=#FFTSize#
; FFTOverlap=#FFTOverlap#
; FFTDecay=#FFTDecay#
; FFTAttack=#FFTAttack#
; FreqMin=#FreqMin#
; FreqMax=#FreqMax#
; AverageSize=#AverageSize#

; [MeasurePeaks]
; Measure=Plugin
; Plugin=AudioLevel
; Port=Output
; Bands=(#Bands# + 1)
; Sensitivity=#Sensitivity#
; FFTSize=#FFTSize#
; FFTOverlap=#FFTOverlap#
; FFTDecay=#PeakFFTDecay#
; FFTAttack=#PeakFFTAttack#
; FreqMin=#FreqMin#
; FreqMax=#FreqMax#
; AverageSize=#AverageSize#

; death.crafter filter (at the end of Unit-Main)
; | Filter Custom bqHighPass(Q 0.2, Freq 20, ForcedGain 5.58), bqLowPass(Q 1, Freq 16000, ForcedGain 20)

[MeasureAudioAnalyzer]
Measure=Plugin
Plugin=AudioAnalyzer
Type=Parent
; Whole skin breaks and deltes your system32 if you remove MagicNumber=104
MagicNumber=104
Threading=Policy SeparateThread | UpdateRate 200 | WarnTime -1
Source=DefaultOutput
ProcessingUnits=Main
Unit-Main=Channels Auto | Handlers MainFFT, MainBR(MainFFT), MainBCT(MainBR), MainTR(MainBCT), MainFinalOutput(MainTR), PeakTR(MainBCT), PeakFinalOutput(PeakTR)
Handler-MainFFT=Type FFT | BinWidth 8 | OverlapBoost 10 | CascadesCount 2 | WindowFunction [#WindowFunction]
Handler-MainBR=Type BandResampler | Bands Log(Count (#Bands# + 1), FreqMin [#FreqMin], FreqMax [#FreqMax]) | CubicInterpolation true
Handler-MainBCT=Type BandCascadeTransformer | MixFunction Average | MinWeight 0.01 | TargetWeight 2 | ZeroLevelMultiplier 1
Handler-MainTR=Type TimeResampler | Attack [#FFTAttack] | Decay [#FFTDecay] | Granularity ([#UpdateRate]*2) | Transform dB, Map(From -[#MaxSensitivity] : -[#MinSensitivity]), Clamp
Handler-MainFinalOutput=Type UniformBlur | Radius [#BlurRadius] | RadiusAdaptation 1
Handler-PeakTR=Type TimeResampler | Attack [#PeakFFTAttack] | Decay [#PeakFFTDecay] | Granularity ([#UpdateRate]*2) | Transform dB, Map(From -[#MaxSensitivity] : -[#MinSensitivity]), Clamp
Handler-PeakFinalOutput=Type UniformBlur | Radius [#BlurRadius] | RadiusAdaptation 1
LogUnusedOptions=false
