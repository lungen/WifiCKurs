// 008001_S37_01_ASCII.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

int main()
{
	int a, b;
	a = b = 0;
	char antwort;
	antwort = 0;

	do
	{
		printf("Erstes Zeichen eingeben: \n");
		//scanf_s("%c", &a);
		//getchar();
		//a = 'z';
		a = 32;
		printf("Zweites Zeichen eingeben: \n");
		//scanf_s("%c", &b);
		//getchar();
		b = 160;
		printf("Ihre Eingaben waren: %c und %c\n", a, b);
		if (((a >= 32) && (a <= 160)) && ((b >= 32) && (b <= 160)))
		{
			if (a > b)
			{
				int tmp = a;
				a = b;
				b = tmp;
			}
			for(a; a < b; a++)
			{
				printf("%c", ++a);
			}
		}
		else
		{
			printf("Ihre Eingabe war ausserhalb der erlaubten Werte (32 - 160)");
		}

		printf("\nNochmal? (j/n)");
		//scanf_s("%c", &antwort);
		antwort = 'n';
	} while (antwort != 'n');

	return 0;
}
