// 007001_S37_01_BeliebigVieleZahlenSummieren.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

int main()
{
	int suma = 0;
	int eingabe = 0;

	do
	{
		printf("bitte zahl eingeben: (0 = fertig)\n");
		scanf_s("%d", &eingabe);
		suma += eingabe;
		printf("summe = %d\n", suma);
	} while (eingabe != 0);
}
