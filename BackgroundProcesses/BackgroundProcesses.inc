[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------
; Usage tips:
; Measures in this file will be part of Droptop's BackgroundProcesses.ini file.
; As a result, #MyVariablesLoc# will not work here. Instead, use the actual file location.
; eg. "#SKINSPATH#Droptop Community Apps\Apps\APP_NAME-APP_AUTHOR\Variables\Variables.inc"
;----------------------------------------------------------------------

[MeasureCoreCount]
Measure=Plugin
Plugin=PowershellRM
Line=((Get-CimInstance –ClassName Win32_Processor).NumberOfCores | Measure-Object -Sum).Sum
UpdateDivider=-1
IfCondition=MeasureCoreCount >= 1
IfTrueAction=[!WriteKeyValue Variables Core1 0 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!WriteKeyValue Variables Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2) "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!SetVariable Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2)]
IfFalseAction=[!WriteKeyValue Variables Core1 1 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"]
IfCondition2=MeasureCoreCount >= 2
IfTrueAction2=[!WriteKeyValue Variables Core2 0 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!WriteKeyValue Variables Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2) "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!SetVariable Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2)]
IfFalseAction2=[!WriteKeyValue Variables Core2 1 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"]
IfCondition3=MeasureCoreCount >= 3
IfTrueAction3=[!WriteKeyValue Variables Core3 0 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!WriteKeyValue Variables Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2) "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!SetVariable Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2)]
IfFalseAction3=[!WriteKeyValue Variables Core3 1 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"]
IfCondition4=MeasureCoreCount >= 4
IfTrueAction4=[!WriteKeyValue Variables Core4 0 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!WriteKeyValue Variables Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2) "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!SetVariable Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2)]
IfFalseAction4=[!WriteKeyValue Variables Core4 1 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"]
IfCondition5=MeasureCoreCount >= 5
IfTrueAction5=[!WriteKeyValue Variables Core5 0 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!WriteKeyValue Variables Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2) "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!SetVariable Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2)]
IfFalseAction5=[!WriteKeyValue Variables Core5 1 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"]
IfCondition6=MeasureCoreCount >= 6
IfTrueAction6=[!WriteKeyValue Variables Core6 0 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!WriteKeyValue Variables Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2) "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!SetVariable Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2)]
IfFalseAction6=[!WriteKeyValue Variables Core6 1 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"]
IfCondition7=MeasureCoreCount >= 7
IfTrueAction7=[!WriteKeyValue Variables Core7 0 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!WriteKeyValue Variables Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2) "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!SetVariable Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2)]
IfFalseAction7=[!WriteKeyValue Variables Core7 1 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"]
IfCondition8=MeasureCoreCount >= 8
IfTrueAction8=[!WriteKeyValue Variables Core8 0 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!WriteKeyValue Variables Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2) "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!SetVariable Items (([MeasureCoreCount]>8?8:[MeasureCoreCount])+2)]
IfFalseAction8=[!WriteKeyValue Variables Core8 1 "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"]
DynamicVariables=1

[MeasureTjMax]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=TjMax
IfCondition=MeasureTjMax = 212
IfTrueAction=[!WriteKeyValue Variables Symbol F "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!UpdateMeterGroup CoreTemp "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw *]
IfFalseAction=[!WriteKeyValue Variables Symbol C "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!UpdateMeterGroup CoreTemp "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw *]
IfConditionMode=1
OnChangeAction=[!SetOption #CURRENTSECTION# OnUpdateAction ""][!WriteKeyValue Variables TjMax [MeasureTjMax] "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!UpdateMeterGroup CoreTemp "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
OnUpdateAction=[!WriteKeyValue Variables TjMax [MeasureTjMax] "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"][!UpdateMeterGroup CoreTemp "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
DynamicVariables=1

[RoundThird]
Measure=Calc
Formula=(ROUND(MeasureTjMax / 3))
OnUpdateAction=[!SetVariable Third [RoundThird] "Droptop\DropdownBar"][!WriteKeyValue Variables Third [RoundThird] "#SKINSPATH#Droptop Community Apps\Apps\CoreTemps-TheyCallMePapa\Variables\VariablesData.inc"]
DynamicVariables=1

[Measure_CoreTemp]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=0
IfCondition=Measure_CoreTemp < #Third#
IfTrueAction=[!SetOption CoreTemps-TheyCallMePapa ImageName "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##*CURRENTSECTION*#]]\Button\Medium\ButtonColorSG.png" "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
IfCondition2=(Measure_CoreTemp > (#Third#+1)) && (Measure_CoreTemp < (#TjMax#-#Third#+1))
IfTrueAction2=[!SetOption CoreTemps-TheyCallMePapa ImageName "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##*CURRENTSECTION*#]]\Button\Medium\ButtonColorSY.png" "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
IfCondition3=(Measure_CoreTemp > (#TjMax#-#Third#)) && (Measure_CoreTemp < #TjMax#)
IfTrueAction3=[!SetOption CoreTemps-TheyCallMePapa ImageName "#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##*CURRENTSECTION*#]]\Button\Medium\ButtonColorSR.png" "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
OnChangeAction=[!SetVariable CurrentTemp [Measure_CoreTemp:0] "Droptop\DropdownBar"][!UpdateMeterGroup CoreTemp "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
DynamicVariables=1
