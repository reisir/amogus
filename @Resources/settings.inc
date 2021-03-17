 [Variables]
; Main visualizer options. These require you to right click > generate skin.
; The other text options and AudioLevel options will work after a simple refresh.
Bands=100
Length=30
String=[\x26Ab]
HidePeaks=0
; You can use any character(s) for the visualizer string.
; For non ASCII characters, find the hex code of the character:
; https://en.wikipedia.org/wiki/List_of_Unicode_characters
; Wikipedia lists the codes as U+0000, for rainmeter it's [\x0000]
; (only 4 digit hex codes seem to work, so emojis etc. with five digit codes won't work)
; Amogus [\x0d9e]
; Minecraft [\x26Cf]
; Square [\x2596]
; Circle [\x25EF]
; Filled Circle [\x26Ab]
; Diamond [\x2314]
; Triangle [\x26DB]
; Heart [\x2665]
; https://en.wikipedia.org/wiki/Playing_cards_in_Unicode
; https://en.wikipedia.org/wiki/Alchemical_Symbols_(Unicode_block)
; ][ will break the skin, dont try it

; Other text options
FontFace=
FontSize=6
FontColor=255,255,255
PeakColor=255,255,255,150
BackgroundColor=0,0,0,1
AccurateText=1

; AudioLevel options
; 48000 khz audio device
; 48000 / 60 (fps) = 800
FFTSize=4800
FFTOverlap=(#FFTSize# - 800)
FFTAttack=0
FFTDecay=0
Sensitivity=40
FreqMin=20
FreqMax=20000
AverageSize=2

PeakFFTAttack=0
PeakFFTDecay=500

; InlineSettings
; These are commented because they will cause a performance hit.
InlineSetting=GradientColor | 0 | d9ed92 ; 0.1 | b5e48c ; 0.2 | 99d98c ; 0.3 | 76c893 ; 0.4 | 52b69a ; 0.5 | 34a0a4 ; 0.6 | 168aad ; 0.7 | 1a759f ; 0.8 | 1e6091 ; 0.9 | 184e77 ; 1
InlinePattern=.*
;InlineSetting2=
;InlinePattern2=.*
;InlineSetting3=
;InlinePattern2=.*
;InlineSetting4=
;InlinePattern4=.*
;InlineSetting5=
;InlinePattern5=.*


PeakInlineSetting=GradientColor | 0 | d9ed9296 ; 0.1 | b5e48c96 ; 0.2 | 99d98c96 ; 0.3 | 76c89396 ; 0.4 | 52b69a96 ; 0.5 | 34a0a496 ; 0.6 | 168aad96 ; 0.7 | 1a759f96 ; 0.8 | 1e609196 ; 0.9 | 184e7796 ; 1
PeakInlinePattern=#InlinePattern#
;PeakInlineSetting2=#InlineSetting2#
;PeakInlinePattern2=#InlinePattern2#
;PeakInlineSetting3=#InlineSetting3#
;PeakInlinePattern2=#InlinePattern2#
;PeakInlineSetting4=#InlineSetting4#
;PeakInlinePattern4=#InlinePattern4#
;PeakInlineSetting5=#InlineSetting5#
;PeakInlinePattern5=#InlinePattern5#