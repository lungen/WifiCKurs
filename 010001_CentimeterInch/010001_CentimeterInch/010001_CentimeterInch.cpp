// 010001_CentimeterInch.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

int main()
{
	float v = 2.5;

	for (int i = 0; i <= 10; i++)
	{
		printf("%2d Inch = %.2f Zentimeter.\n", i, (v * i));
	}

	return 0;
}
