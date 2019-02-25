// 015.001_S49_P1_StringReverse.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

#include "pch.h"
#include <iostream>

#define MAX 81

int main()
{
	char s[MAX];
	char sB[MAX];
	for (int i = 0; i < MAX; i++) { s[i] = '-'; sB[i] = '_'; }
	char c = '-';

	do
	{
		int i = 0;
		printf("Bitte Zeichenkette eingben: \n");
		while ((i < MAX - 1) && ((c = getchar()) != '\n'))
		{
			s[i] = c;
			i++;
		}
		// string abschliessen
		s[i] = '\0';

		printf("\nIhre Eingabe: %s\n", s);

		int j = 0;
		while (--i >= 0 )
		{
			//printf("%c", s[i]);
			sB[j] = s[i];
			j++;
		}
		sB[j] = '\0';

		printf("\nUmgekehrte Reihenfolge: %s\n", sB);

		printf("\nWiederholen? (j/n)");
		c = getchar();

	while (getchar() != '\n'); //flush
	} while (c != 'n');
}
