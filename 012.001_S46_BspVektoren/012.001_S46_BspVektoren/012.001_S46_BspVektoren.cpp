// 012.001_S46_BspVektoren.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#define ANZAHL 21

int main()
{
	int i, laenge, wort[ANZAHL];

	for (i = 0; i < ANZAHL; i++)
	{
		wort[i] = 0;
	}
	printf("Bitte geben Sie beliebig viele Woerter ein (Ende mit ENTER!)\n");

	while (getchar() != '\n')
	{
		//char c = getchar();
		for (laenge = 1; getchar() != '\n'; laenge++);
		//for (laenge = 1; c != '\n'; laenge++)
			//printf("%c\n", c);

			if (laenge > 20)
				wort[20]++;
			else
				wort[laenge - 1]++;

			//c = getchar();
	}
	// ausgabe des Erbenisses
	for (i = 0; i < ANZAHL; i++)
		printf("%d Woerter mit %d Buchstaben\n", wort[i], i + 1);
	return 0;
}

