// fileausgabe_s79_bsp2_v2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#define FILENAME "c:\\temp\\taschenrechner.cpp"
int main()
{
	FILE * pFile;
	char mystring[1000];
	int zeilenr = 1,err;
	err = fopen_s(&pFile,FILENAME, "r");
	if (err == 0) {
		while (fgets(mystring, 1000, pFile) != NULL) {
			printf("%04d %s", zeilenr++, mystring);
		}
		fclose(pFile);
	}
	return 0;
}