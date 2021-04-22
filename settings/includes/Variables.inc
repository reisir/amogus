[Variables]

;@About | Name Internal settings | Description You better know what you're doing.

;?Info | Name Disclaimer | Description Changing internal variables requires manual regeneration to apply changes.
s_Disclaimer=

;?Integer | Description This controls the default category.
s_CurrentCategory=2
;?Integer |
s_ScrollSpeed=30
;?Integer | | Description Current scroll amount of the right panel
s_ScrollRightPanel=0
;?Integer | Description Current scroll amount of the left panel
s_ScrollLeftPanel=0
;?Integer |
s_LeftPanelW=200
;?Integer |
s_RightPanelW=600
;?Integer |
s_PanelH=700
;? | Description Controls when to allow scrolling and when to show the scroll indicator. Uses s_PanelH
s_ScrollTreshold=([#s_PanelH] - ([#s_PanelH] / 4))
;?Info | Description Hah can't get rid of me | Link 0
s_CreditIconPadding=5

;@Default | Name Background 
;?Color | 
s_RightPanelBackgroundColor=255,255,255,255
;?Color | 
s_LeftPanelBackgroundColor=200,200,200,255
;?Integer |
s_BackgroundRounding=5

;@Default | Name Font
;? | 
s_FontFace=Segoe UI
;? | 
s_IconFontFace=Segoe MDL2 Assets
;?Color | 
s_FontColor=0,0,0
;?Integer |
s_FontSize5=8
;?Integer |
s_FontSize4=10
;?Integer |
s_FontSize3=12
;?Integer |
s_FontSize2=16
;?Integer |
s_FontSize1=20
;?Integer |
s_SelectedFontWeight=500
;?Integer |
s_FontWeight=400

;@ | Name Category list
;?Integer |
s_ListAboutTopPadding=35
;?Integer |
s_ListAboutLeftPadding=8
;?Integer |
s_ListDefaultLeftPadding=20
;?Integer |
s_ListTopicLeftPadding=10
;?Integer |
s_ListYPadding=7
;? | Description Used for width calculations ClipString=2
s_ListRightPadding=10

;@ | Name Category
;? | Description Visually center the category icon. Uses s_CategoryTitleTopPadding
s_CategoryIconTopPadding=([#s_CategoryTitleTopPadding] + 5)
;? | Description Fix the literal 1px offset caused by the title and description using different font sizes
s_VarTitleNudge=-1
;?Integer |
s_CategoryTitleTopPadding=35
;?Integer |
s_CategoryTitleBottomPadding=20
;?Integer |
s_CategoryTitleXPadding=20
;?Integer |
s_CategoryTitleFontWeight=500
;?Integer |
s_CategoryDescriptionFontWeight=500

;@ | Name Variable
;?Integer |
s_VariableTitleFontWeight=400
;?Integer |
s_ValueYPadding=10
;?Integer |
s_VariableXPadding=20
;? | Description Uses s_FontSize3
s_InputTextFontSize=[#s_FontSize3]

;@ | Name Color
;?Integer |
s_ColorSize=15
;?Integer |
s_ColorStrokeWidth=1
;?Integer |
s_ColorStrokeWidthSelected=2
;?Color | 
s_ColorStrokeColor=200,200,200
;?Integer |
s_ColorStringLeftPadding=10

;@ | Name Toggle
;?Color | Description Uses s_SelectedColor
s_ToggleActiveColor=[#s_SelectedColor]
;?Color | Description Uses s_RightPanelBackgroundColor
s_ToggleInactiveColor=[#s_RightPanelBackgroundColor]
;?Integer |
s_ToggleSize=20
;?Integer |
s_TogglePadding=2.5
;?Integer |
s_ToggleLength=25

;@ | Name Selector
;?Integer |
s_SelectorPadding=8
;?Integer |
s_SelectorWidth=3
;?Integer | Description Uses s_SelectorWidth
s_SelectorRounding=[#s_SelectorWidth]
;?Integer |
s_SelectedColor=007acc

;@ | Name Scroll indicator
;?Integer | Description uses s_ValueYPadding
s_scrollIndicatorYPadding=[#s_ValueYPadding]
;?Integer |
s_ScrollIndicatorWidth=5
;?Integer |
s_scrollIndicatorXPadding=5
;?Color | 
s_ScrollIndicatorBackgroundColor=0,0,0,100
;?Color | 
s_ScrollIndicatorColor=200,200,200
;?Integer |
s_ScrollIndicatorRounding=5
;? | Hidden 1
s_ScrollIndicatorMaxHeight=([#s_PanelH] - ([#s_scrollIndicatorYPadding] * 2))

;@ | Name Generator
;? | 
s_GeneratorRightPanelWidth=350
;? | 
s_GeneratorLeftPanelWidth=50
;? | 
s_GeneratorPanelHeight=300

; Apparently the script doesn't break when there's more than one variable under one declaration
;@ | Name Debug colors
;?Toggle | 
s_DebugColors=0
;?Color | 
s_DebugCategoryTitleColor1=255,0,195,100
s_DebugCategoryTitleColo0=0,0,0,0
;?Color | 
s_DebugValueColor1=170,0,255,100
s_DebugValueColor0=0,0,0,0
;?Color | 
s_DebugDescriptionColor1=0,238,255,100
s_DebugDescriptionColor0=0,0,0,0
;?Color | 
s_DebugListColor1=0,255,51,100
s_DebugListColor0=0,0,0,0
;?Color | 
s_DebugListIconColor1=255,255,0,100
s_DebugListIconColor0=0,0,0,0
;?Color | 
s_DebugSeparatorColor1=51,46,46,100
s_DebugSeparatorColor0=0,0,0,0
;?Color | 
s_DebugVariableTitleColor1=255,0,0,100
s_DebugVariableTitleColor0=0,0,0,0
;?Color | 
s_DebugCategoryIconColor1=229,255,0,100
s_DebugCategoryIconColor0=0,0,0,0
;?Color | 
s_DebugToggleColor1=255,0,0,100
s_DebugToggleColor0=0,0,0,0
;?Color | 
s_DebugColorColor1=255,0,0,100
s_DebugColorColor0=0,0,0,0
