// inch2cm.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
int main()
{
	int cm = 0;
	double zoll = 0;
	//for (;cm <= 26;cm++)
	for (; zoll <=10; cm++)	{
		zoll=cm / 2.54;
		printf("%2d cm entspricht %7.3lf inch.\n", cm, zoll);
	};
	return 0;
}

