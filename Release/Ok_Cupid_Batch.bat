ECHO OFF
ECHO {A,B}{C,D}
ECHO {A,B}{C,D}| Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO OFF
ECHO {A{B,C}}
ECHO {A{B,C}}| Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO {A,B{C,D}}
ECHO {A,B{C,D}}| Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO {A,B{C,D,E}}
ECHO {A,B{C,D,E}}| Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

::ALL NEGATIVE TEST

ECHO OFF
ECHO {A,B{C,D}
ECHO {A,B{C,D} | Ok_Cupid_Test.exe
Pause


ECHO ----
ECHO ----

ECHO OFF
ECHO {A{C,D}
ECHO {A{C,D} | Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO OFF
ECHO {A,}
ECHO {A,} | Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO OFF
ECHO }ABC
ECHO }ABC | Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO OFF
ECHO {ABC
ECHO {ABC | Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO OFF
ECHO }{
ECHO }{ | Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO OFF
ECHO {}
ECHO {} | Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO OFF
ECHO A,B,C
ECHO A,B,C | Ok_Cupid_Test.exe
Pause

ECHO ----
ECHO ----

ECHO OFF
ECHO A,B,C
ECHO A,B,C | Ok_Cupid_Test.exe
Pause