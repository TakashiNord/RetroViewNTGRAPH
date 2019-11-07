
echo on
color f2

rem echo %HOMEDRIVE% %HOMEPATH% %ALLUSERSPROFILE% %USERPROFILE% %APPDATA%

set wrk=%cd%
set dss=r:
set ocx=%wrk%\ntgraph.ocx

rem if NOT EXIST %ocx% ( goto err1_exit )
rem 

regsvr32 %ocx%

exit

goto normal_exit

:err1_exit
echo " %ocx% - dont exist.. press any key."
pause

:normal_exit
@echo off
exit
