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
		a = 'z';
		//a = 160;
		printf("Zweites Zeichen eingeben: \n");
		//scanf_s("%c", &b);
		//getchar();
		b = 'a';
		printf("Ihre Eingaben waren: %c und %c\n", a, b);
		if (((a >= 32) && (a <= 160)) && ((b >= 32) && (b <= 160)))
		{
			if (a > b)
			{
				int tmp = a;
				a = b;
				b = tmp;
			}
			while (a < b-1)
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

	printf("\n");
	for (int i = 32; i <= 255; i++)
	{
		printf("%c - %3d, ", i, i);
		if ((i % 10) == 0) 
		{
			printf("\n");
		}
	}

	system("cls");
	scanf_s("%c", &antwort);
	return 0;
}
