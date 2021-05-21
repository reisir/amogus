 [Variables]
; AudioLevel options
; 48000 khz audio device
; 48000 / 60 (fps) = 800
FFTSize=2048
FFTOverlap=(#FFTSize# - 800)
;this might not make sense


; From ASV
UpdateRate=16
MaxSensitivity=35
MinSensitivity=6
BlurRadius=2
WindowFunction=Kaiser


; Eldog — Today at 01:55
; have you considered: gradients are extremely expensive to update every tic
; maybe don't

; inline setting variables
;Gradient=GradientColor | 0 | 88EC78 ; 0.0 | F9BA30 ; 0.5 | FC3B4C ; 1
;PeakGradient=GradientColor | 0 | 88EC7869 ; 0.0 | F9BA3069 ; 0.5 | FC3B4C69 ; 1

; InlineSettings
;InlineSetting=#Gradient#
;InlinePattern=.*
; this doesn't work :/
;InlineSetting2=CharacterSpacing | -10 | -10
;InlinePattern2=\n
;InlineSetting3=
;InlinePattern3=.*
;InlineSetting4=
;InlinePattern4=.*
;InlineSetting5=
;InlinePattern5=.*

; Peak InlineSettings
;PeakInlineSetting=#PeakGradient#
;PeakInlinePattern=#InlinePattern#
;PeakInlineSetting2=#InlineSetting2#
;PeakInlinePattern2=#InlinePattern2#
;PeakInlineSetting3=#InlineSetting3#
;PeakInlinePattern2=#InlinePattern2#
;PeakInlineSetting4=#InlineSetting4#
;PeakInlinePattern4=#InlinePattern4#
;PeakInlineSetting5=#InlineSetting5#
;PeakInlinePattern5=#InlinePattern5#
