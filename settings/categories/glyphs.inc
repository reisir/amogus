[pickertitle]
Meter=String
Text=Glyph picker
MeterStyle=VarStringValue | RightPanel
X=[#s_VariableXPadding]
Y=R
Padding=0,[#s_ValueYPadding],0,0
W=
MouseOverAction=

[GlyphPicker]
Meter=Shape
X=[#s_VariableXPadding]
Y=[#s_ValueYPadding]R
Shape=Rectangle0,0,400,200 | StrokeWidth 0 | Fill Color 0,0,0,0
MeterStyle=RightPanel | Glyph

[Glyph]
FontSize=[#s_FontSize1]
FontColor=[#s_FontColor]
AntiAlias=1
AccurateText=1
Padding=5,5,5,5
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor #s_SelectedColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor [#s_FontColor]][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Glyph0]
Meter=String
Text=[\x0d9e]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "0d9E" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0r
Y=0r
MeterStyle=RightPanel | Glyph
TooltipTitle=AMOGUS
TooltipText=amogus
[Glyph1]
Meter=String
Text=[\x26CF]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "26CF" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph2]
Meter=String
Text=[\x2314]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "2314" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph3]
Meter=String
Text=[\x25FE]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "25FE" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph4]
Meter=String
Text=[\x25FC]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "25FC" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph5]
Meter=String
Text=[\x25A0]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "25A0" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph6]
Meter=String
Text=[\x2313]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "2313" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=[#s_VariableXPadding]
Y=0R
MeterStyle=RightPanel | Glyph
[Glyph7]
Meter=String
Text=[\x25CB]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "25CB" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph8]
Meter=String
Text=[\x25EF]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "25EF" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph9]
Meter=String
Text=[\x25CF]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "25CF" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph10]
Meter=String
Text=[\x26AB]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "26AB" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph11]
Meter=String
Text=[\x25CA]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "25CA" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
[Glyph12]
Meter=String
Text=[\x26DB]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "26DB" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=[#s_VariableXPadding]
Y=0R
MeterStyle=RightPanel | Glyph
[Glyph13]
Meter=String
Text=[\x2665]
LeftMouseUpAction=[!WriteKeyValue "Variables" "stringCode" "2665" "#SKINSPATH#amogus\@Resources\userSettings.inc"][!Refresh][#s_OnChangeAction]
X=0R
Y=0r
MeterStyle=RightPanel | Glyph
