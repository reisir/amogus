[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon6]
Meter=String
Text=
MeterStyle=CategoryIcon | RightPanel

[Title6]
Meter=String
Text=Peaks
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon6:W])

[CategoryDescription6]
Meter=String
Text=
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator6]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Show peaks
MeterStyle=VarTitle | RightPanel
[VariableDescription0]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel

[ToggleOff0]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#s_Peaks])
Y=([VariableDescription0:Y] + [VariableDescription0:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "s_Peaks" 1 "#SKINSPATH#amogus\@Resources\userSettings.inc"][!SetVariable "s_Peaks" 1][!Update][!Redraw][#s_OnChangeAction]

[ToggleOn0]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#s_Peaks] - 1)
Y=([VariableDescription0:Y] + [VariableDescription0:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "s_Peaks" 0 "#SKINSPATH#amogus\@Resources\userSettings.inc"][!SetVariable "s_Peaks" 0][!Update][!Redraw][#s_OnChangeAction]

[ClearFloat0]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
MeterStyle=RightPanel
Y=([VariableDescription0:Y] + [VariableDescription0:H])
DynamicVariables=1

[VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=Peak attack 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue1]
Meter=String
Text=[#PeakFFTAttack]
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
DefaultValue=[#PeakFFTAttack]
Command1=[!WriteKeyValue "Variables" "PeakFFTAttack" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue1][!Redraw]
InputNumber=1

[VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=Peak decay
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue2]
Meter=String
Text=[#PeakFFTDecay]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText2" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText2]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue2:X])
Y=([VariableValue2:Y] + [#s_ValueYPadding])
H=[VariableValue2:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#PeakFFTDecay]
Command1=[!WriteKeyValue "Variables" "PeakFFTDecay" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue2][!Redraw]
InputNumber=1

[VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=Peak update divider
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue3]
Meter=String
Text=[#PeakUpdateDivider]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText3" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText3]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue3:X])
Y=([VariableValue3:Y] + [#s_ValueYPadding])
H=[VariableValue3:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#PeakUpdateDivider]
Command1=[!WriteKeyValue "Variables" "PeakUpdateDivider" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue3][!Redraw]
InputNumber=1

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


