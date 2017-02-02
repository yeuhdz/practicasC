/*
Con el preprocesador hacer que C pueda interpretar 
el siguiente codigo
*/

#include <stdio.h>

#define INTEGER int
#define BEGIN main(){
#define IF if
#define THEN {
#define ELSE } else {
#define PRINT printf
#define ENDIF }
#define END }

BEGIN
INTEGER x = 10;
IF(x>=10)
THEN
	PRINT("TENGO DIEZ\n");
ELSE
	PRINT("REPROBARE\n");
ENDIF
END 
