// 013.001_S47_BspZiffernZaehlen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#define ANZAHL 10

int GetDigits(void);
int GetDigits2(void);

int GetDigits(void)
{
	char c = '-';
	int a[ANZAHL];
	for (int i = 0; i < ANZAHL; i++) { a[i] = 0; }

	printf("Bitte eine beliebige Zeichenkette eingeben: \n");

	while ((c = getchar()) != '\n')
	{
		switch (c)
		{
			case '0':
				a[0]++;
				break;
			case '1':
				a[1]++;
				break;
			case '2':
				a[2]++;
				break;
			case '3':
				a[3]++;
				break;
			case '4':
				a[4]++;
				break;
			case '5':
				a[5]++;
				break;
			case '6':
				a[6]++;
				break;
			case '7':
				a[7]++;
				break;
			case '8':
				a[8]++;
				break;
			case '9':
				a[9]++;
				break;
			default:
				break;
		}
	}

	for (int i = 0; i < ANZAHL; i++)
	{
		if (a[i] > 0)
			printf("Es wurden mit %d	%d Ziffern eingegeben.\n", i, a[i]);
	}

	return 0;
}

int GetDigits2(void)
{
	//const char digit[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0' };
	const char digit[] = {"0123456789"};

	int a[10];
	for (int i = 0; i < 10; i++) { a[i] = 0; }

	char c = '-';
	while ((c = getchar()) != '\n')
	{
		for (int i = 0; digit[i] != '\0'; i++)
		{
			if (c == digit[i]) { a[i]++; }
		}
	}

	for (int i = 0; i < 10; i++) { if (a[i] > 0) { printf("%c: %d\n", digit[i], a[i]); } }

	return 0;
}

int main()
{

	//GetDigits();
	GetDigits2();
	return 0;
}