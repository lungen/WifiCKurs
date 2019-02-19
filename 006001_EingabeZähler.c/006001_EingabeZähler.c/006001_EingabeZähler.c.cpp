// 006001_EingabeZähler.c.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

int main()
{
	int eingabe, anzahl, ziffern, leer, andere;
	eingabe = anzahl = ziffern = leer = andere = 0;

		printf("Bitte um Eingabe: \n");
	while((eingabe=getchar()) != '\n')
	{
		switch (eingabe)
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				ziffern++;
				break;
			case ' ':
			case '\t':
				leer++;
				break;
			default:
				andere++;
				break;
		}
		anzahl++;
	}

	printf("Ende: \n");
	printf("Anzahl: %d\n", anzahl);
	printf("Ziffern: %d\n", ziffern);
	printf("Leere: %d\n", leer);
	printf("Andere: %d\n", andere);
	return 0;
}
