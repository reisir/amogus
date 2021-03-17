 [Variables]
; Main visualizer options. These require you to right click > generate skin.
; The other text options and AudioLevel options will work after a simple refresh.
Bands=100
Length=30
String=[\x0d9e]
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

; InlineSettings
; These are commented because they will cause a performance hit.
;InlineSetting=GradientColor | 90 | #FontColor#,0 ; 0.0 | #FontColor#,255 ; 0.95
;InlinePattern=.*
;InlineSetting2=
;InlinePattern2=.*
;InlineSetting3=
;InlinePattern2=.*
;InlineSetting4=
;InlinePattern4=.*
;InlineSetting5=
;InlinePattern5=.*