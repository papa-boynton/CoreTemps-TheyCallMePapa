[Variables]
CoreTemps-TheyCallMePapa.LeftMouseDownAction=[]
CoreTemps-TheyCallMePapa.MouseOverAction=[]
CoreTemps-TheyCallMePapa.MouseLeaveAction=[]
CoreTemps-TheyCallMePapa.ButtonAction=[]
CoreTemps-TheyCallMePapa.Text=Text
CurrentTemp=0

;----------------------------------------------------
; Styles
;----------------------------------------------------

[CoreTemps-TheyCallMePapa.Style]
ImageAlpha=0
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)+([CoreTemps-TheyCallMePapa.Text:W]+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/3.5)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/3.5)%1)))

[CoreTemps-TheyCallMePapa_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#CoreTemps-TheyCallMePapa]]]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
DynamicVariables=1
Container=SystemTrayContainer
Group=CustomApp[#CoreTemps-TheyCallMePapa]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#CoreTemps-TheyCallMePapa]] | CustomAppButton | CoreTemps-TheyCallMePapa

;----------------------------------------------------
; Meters
;----------------------------------------------------

[CoreTemps-TheyCallMePapa_Icon]
Meter=Image
MeterStyle=InfoStyle | CoreTemps-TheyCallMePapa_Style
ImageName="#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Button\Medium\ButtonS.png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=#SysIconPadding#
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#CoreTemps-TheyCallMePapa]]]
Y=0
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)
H=(#TopHeight#+#TopBarIconHOffset#)

[CoreTemps-TheyCallMePapa.Text]
Meter=String
MeterStyle=InfoStyle | CoreTemps-TheyCallMePapa_Style
StringAlign=LeftCenter
FontFace=SF Mono
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=(((#TopBarSysTextWPadding#*1.5)-(#TopBarSysTextWPadding#*1.5)%1)),0,((#TopBarSysTextWPadding#*1.5)-(#TopBarSysTextWPadding#*1.5)%1),0
X=([#SideAppSlotXPos[#SideAppPosCustomApp[#CoreTemps-TheyCallMePapa]]]+(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1))
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
Text="#CurrentTemp#°#Symbol#"