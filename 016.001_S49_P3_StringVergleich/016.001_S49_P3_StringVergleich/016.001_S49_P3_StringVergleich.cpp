// 016.001_S49_P3_StringVergleich.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Einfuehrung in das Programmieren mit C
// Seite 49, Beispiel 3.

#include "pch.h"
#include <iostream>

#define MAX 1024

int main()
{
	char s[MAX];
	char sB[MAX];
	char *ptr[2];
	ptr[0] = &s[0];
	ptr[1] = &sB[0];

	int sumA = 0;
	int sumB = 0;
	int *ptrSum[2];
	ptrSum[0] = &sumA;
	ptrSum[1] = &sumB;


	for (int i = 0; i < MAX; i++) { s[i] = '-'; sB[i] = '-'; }
	char c = '-';

	do
	{
		int i = 0;
		int n = 0;
		while (n <= 1)
		{
			printf("\n\n%d Zeichenkette eingeben: \n", n + 1);

			while ((i < MAX - 1) && ((c = getchar()) != '\n'))
			{
				ptr[n][i] = c;
				*ptrSum[n] += c;
				i++;
			}
			// string abschliessen
			ptr[n][i] = '\0';

			printf("\nIhre Eingabe: %s\n", ptr[n]);
			printf("\nWert (Groesse): %d\n", *ptrSum[n]);
			n++;
		}

		// auswertung - richtig
		int j = 0;
		n = 0;
		while (ptr[n][j] == ptr[n+1][j]) { j++; }
		if (ptr[n][j] > ptr[n + 1][j])
		{
			printf("String 1 ist groesser\n");

		}
		printf("String 2 ist groesser\n");
		

		// auswertung - flasch
		if (*ptrSum[0] > *ptrSum[1]) { printf("%s ist Groesser.\n", ptr[0]); }
		if (*ptrSum[0] == *ptrSum[1]) { printf("%s Beide Strings gleich gross.\n", ptr[0]); }
		if (*ptrSum[0] < *ptrSum[1]) { printf("%s ist Groesser.\n", ptr[1]); }

		*ptrSum[0] = 0;
		*ptrSum[1] = 0;

		printf("\nWiederholen? (j/n)");
		c = getchar();
		while (getchar() != '\n'); // flush

	} while (c != 'n');
}

