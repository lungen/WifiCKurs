// 009002_ZeichenEinlesenForSchlaife_Version-GetChar.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

int main()
{
	char a = ' '; 
	char b = ' '; 
	char antwort = ' '; 

	do
	{
		printf("Erstes Zeichen eingeben: \n");
		a = getchar();
		while (getchar() != '\n');
		//scanf_s("%c", &a);

		printf("Zweites Zeichen eingeben: \n");
		b = getchar();
		while (getchar() != '\n');
		//scanf_s("%c", &b);

		if (a > b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}
		a++;
		for (; a < b - 1; a++)
		{
			printf("%c", a);
		}

		printf("\nNochmal? (j/n)");
		antwort = getchar();
		while (getchar() != '\n');
		//scanf_s("%c", &antwort);
	} while (antwort != 'n');

	return 0;
}