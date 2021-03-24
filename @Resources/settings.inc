 [Variables]
; Main visualizer options. These require you to right click > generate skin.
; The other text options and AudioLevel options will work after a simple refresh.
Bands=80
Length=30
String=[\x26Ab]
; You can use any character(s) for the visualizer string.
; For non ASCII characters, find the hex code of the character:
; https://en.wikipedia.org/wiki/List_of_Unicode_characters
; Wikipedia lists the codes as U+0000, for rainmeter it's [\x0000]
; (only 4 digit hex codes seem to work, 5 digit codes won't work)

; Other text options
FontFace=
FontSize=10
FontColor=255,255,255
PeakColor=255,255,255,150
BackgroundColor=0,0,0,1
AccurateText=1

; AudioLevel options
; 48000 khz audio device
; 48000 / 60 (fps) = 800
FFTSize=4096
FFTOverlap=(#FFTSize# - 800)
FFTAttack=0
FFTDecay=0
Sensitivity=40
FreqMin=20
FreqMax=18000
AverageSize=2

; Peak settings
HidePeaks=0
PeakUpdateDivider=2
PeakFFTAttack=0
PeakFFTDecay=250

; inline setting variables
Gradient=GradientColor | 0 | 88EC78 ; 0.0 | F9BA30 ; 0.5 | FC3B4C ; 1
PeakGradient=GradientColor | 0 | 88EC7869 ; 0.0 | F9BA3069 ; 0.5 | FC3B4C69 ; 1

; InlineSettings
InlineSetting=#Gradient#
InlinePattern=.*
;InlineSetting2=CharacterSpacing | -10 | -10
;InlinePattern2=\n
;InlineSetting3=
;InlinePattern3=.*
;InlineSetting4=
;InlinePattern4=.*
;InlineSetting5=
;InlinePattern5=.*

; Peak InlineSettings
PeakInlineSetting=#PeakGradient#
PeakInlinePattern=#InlinePattern#
;PeakInlineSetting2=#InlineSetting2#
;PeakInlinePattern2=#InlinePattern2#
;PeakInlineSetting3=#InlineSetting3#
;PeakInlinePattern2=#InlinePattern2#
;PeakInlineSetting4=#InlineSetting4#
;PeakInlinePattern4=#InlinePattern4#
;PeakInlineSetting5=#InlineSetting5#
;PeakInlinePattern5=#InlinePattern5#