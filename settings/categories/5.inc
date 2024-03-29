[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon5]
Meter=String
Text=
MeterStyle=CategoryIcon | RightPanel

[Title5]
Meter=String
Text=Main
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon5:W])

[CategoryDescription5]
Meter=String
Text=
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator5]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Visualizer attack
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue0]
Meter=String
Text=[#FFTAttack]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText0" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText0]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue0:X])
Y=([VariableValue0:Y] + [#s_ValueYPadding])
H=[VariableValue0:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#FFTAttack]
Command1=[!WriteKeyValue "Variables" "FFTAttack" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue0 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue0][!Redraw]
InputNumber=1

[VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=Visualizer decay
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue1]
Meter=String
Text=[#FFTDecay]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText1" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText1]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue1:X])
Y=([VariableValue1:Y] + [#s_ValueYPadding])
H=[VariableValue1:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#FFTDecay]
Command1=[!WriteKeyValue "Variables" "FFTDecay" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue1][!Redraw]
InputNumber=1

; [VariableIcon5]
; Meter=String
; Text=
; MeterStyle=VariableIcon | RightPanel
; Hidden=
; [VariableTitle5]
; Meter=String
; Text=Smoothing level (AverageSize)
; MeterStyle=VarTitle | RightPanel
; Hidden=
; [VariableDescription5]
; Meter=String
; Text=
; MeterStyle=VarDescription | RightPanel
; Hidden=
; [VariableValue5]
; Meter=String
; Text=[#AverageSize]
; MeterStyle=VarStringValue | RightPanel
; LeftMouseUpAction=[!CommandMeasure "InputText5" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; Hidden=
; [InputText5]
; Measure=Plugin
; Plugin=InputText
; SolidColor=[#s_RightPanelBackgroundColor]
; FontColor=[#s_FontColor]
; FontFace=[#s_FontFace]
; FontSize=[#s_InputTextFontSize]
; Disabled=
; X=([VariableValue5:X])
; Y=([VariableValue5:Y] + [#s_ValueYPadding])
; H=[VariableValue5:H]
; W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
; DynamicVariables=1
; DefaultValue=[#AverageSize]
; Command1=[!WriteKeyValue "Variables" "AverageSize" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
; OnDismissAction=[!SetOption VariableValue5 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue5][!Redraw]
; InputNumber=1

[LastRightPanel]
Meter=String
Text=Last
FontColor=255,0,0,0
MeterStyle=LastItem | RightPanel

[ScrollDownRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] - [#s_ScrollSpeed]
IfCondition=([LastRightPanel:Y] > [#s_ScrollTreshold])
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollDownRightPanel]"][!DisableMeasure "ScrollDownRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollDownRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[ScrollUpRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] + [#s_ScrollSpeed]
IfCondition=([FirstRightPanel:Y] < 0)
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollUpRightPanel]"][!DisableMeasure "ScrollUpRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollUpRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1


