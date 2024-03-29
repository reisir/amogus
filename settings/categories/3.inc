[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon3]
Meter=String
Text=[\xE986]
MeterStyle=CategoryIcon | RightPanel

[Title3]
Meter=String
Text=Glyph 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon3:W])

[CategoryDescription3]
Meter=String
Text=
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator3]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=String 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=Unicode character code used to generate the visualizer
MeterStyle=VarDescription | RightPanel
Hidden=

[valuex]
Meter=String
Text="[\x"
MeterStyle=VarStringValue | RightPanel
W=
Padding=0,[#s_ValueYPadding],0,0
MouseOverAction=
MouseLeaveAction=

[VariableVariableValue0]
Meter=String
Text=[#stringCode]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText0" "ExecuteBatch All"][!SetOption [#CURRENTSECTION] "FontColor" "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=0R
Y=1r
; SolidColor=255,0,0
Padding=0,[#s_ValueYPadding],0,0
DynamicVariables=1
W=

[valueater]
Meter=String
Text="] = [#String]"
X=90
Y=-1r
MeterStyle=VarStringValue | RightPanel
MouseOverAction=
MouseLeaveAction=

[InputText0]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue0:X])
Y=([VariableVariableValue0:Y] + [#s_ValueYPadding])
H=([VariableVariableValue0:H])
W=([VariableVariableValue0:W] + 5)
DynamicVariables=1
DefaultValue=[#stringCode]
InputLimit=4
Command1=[!WriteKeyValue "Variables" "stringCode" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue0 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue0][!Redraw]

@IncludeGlyphPicker=glyphs.inc


[VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
Y=[#s_ValueYPadding]R
[VariableTitle1]
Meter=String
Text=
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=List of character codes:
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue1]
Meter=String
Text=Unicode character code list
MeterStyle=VarStringValue | Link1  | RightPanel
Hidden=
LeftMouseUpAction=["https://en.wikipedia.org/wiki/List_of_Unicode_characters"]

[VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
[VariableTitle3]
Meter=String
Text=Font
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue3]
Meter=String
Text=[#FontFace]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText3" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText3]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue3:X])
Y=([VariableVariableValue3:Y] + [#s_ValueYPadding])
H=[VariableVariableValue3:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#FontFace]
Command1=[!WriteKeyValue "Variables" "FontFace" "$UserInput$" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue3][!Redraw]

[LastRightPanel]
Meter=String
Text=Last
FontColor=255,0,0,0
MeterStyle=LastItem | RightPanel
