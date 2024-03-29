[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon2]
Meter=String
Text=[\xEC3B] 
MeterStyle=CategoryIcon | RightPanel

[Title2]
Meter=String
Text=Visualizer 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon2:W])

[CategoryDescription2]
Meter=String
Text=Visualizer attributes
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator2]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Bars 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=Number of bands to generate
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue0]
Meter=String
Text=[#Bands]
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
DefaultValue=[#Bands]
Command1=[!WriteKeyValue "Variables" "Bands" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue0 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue0][!Redraw]
InputNumber=1

[VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=Height 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=Number of [#String]'s in each bar
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue1]
Meter=String
Text=[#Length]
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
DefaultValue=[#Length]
Command1=[!WriteKeyValue "Variables" "Length" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue1][!Redraw]
InputNumber=1


[VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5]
Meter=String
Text=Size
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription5]
Meter=String
Text=Size of individual [#String]'s 
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue5]
Meter=String
Text=[#FontSize]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText5" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText5]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue5:X])
Y=([VariableValue5:Y] + [#s_ValueYPadding])
H=[VariableValue5:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#FontSize]
Command1=[!WriteKeyValue "Variables" "FontSize" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue5 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue5][!Redraw]
InputNumber=1


[VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=Colors 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue2]
Meter=String
Text= 
MeterStyle=VarStringValue | Link0 | RightPanel
Hidden=
LeftMouseUpAction=[""]
[MeasureLinkStatus2]
Measure=Calc
Formula=0
IfCondition=(0 = [#CURRENTSECTION#])
IfFalseAction=[!DisableMouseAction VariableValue2 LeftMouseUpAction]
Disabled=

[VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3Title]
Meter=String
Text= 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=Bars 
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue3]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#FontColor] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB3" "Run"]
Hidden=
[StringVariableValue3]
Meter=String
Text=[#FontColor]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB3" "Run"]
Hidden=
[RainRGB3]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=FontColor" "FileName=#SKINSPATH#amogus\@Resources\userSettings.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh][#s_OnChangeAction]
[VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4Title]
Meter=String
Text= 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=Peaks
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue4]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#PeakColor] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB4" "Run"]
Hidden=
[StringVariableValue4]
Meter=String
Text=[#PeakColor]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure "RainRGB4" "Run"]
Hidden=
[RainRGB4]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=PeakColor" "FileName=#SKINSPATH#amogus\@Resources\userSettings.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh][#s_OnChangeAction]


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


