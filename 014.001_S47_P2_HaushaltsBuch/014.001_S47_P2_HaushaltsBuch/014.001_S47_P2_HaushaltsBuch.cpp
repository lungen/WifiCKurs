// \0 => Zahlen-Wert = 0
#include "pch.h"
#include <iostream>

#define MONATE 12
int monate[MONATE];

int Menu(void);
int AusgabenEingeben(void);
int AusgabenAnzeigen(void);
int AusgabenSummieren(void);

int AusgabenAnzeigen(void)
{
	return 0;
}

int AusgabenSummieren(void)
{
	return 0;
}

int AusgabenEingeben(void)
{
	unsigned int wert = -1;
	int monat = -1;

	printf("\nMontag eingeben: [1-12] (0 =  EXIT)\n");
	do
	{
		monat = getchar();
		while (getchar() != '\n'); //fflush(stdin)
		if (monat == '0') Menu();

	} while (monat < 0 && monat > 12);

	printf("\nAusgabe eingeben: (€ min. 0 - max. 9999)\n");
	do 
	{
		scanf_s("%d", &wert);
		printf("%d", wert);

	} while (wert < 0 && wert > 65000);

	return 0;
}


int Menu(void)
{
	char antwort = '0';
	
	do
	{
		printf("\n[1] AUSGABEN eingben/aendern\n");
		printf("[2] AUSGABEN anzeigen\n");
		printf("[9] Alle AUSGABEN anzeigen\n");
		printf("[0] EXIT\n");
		antwort = getchar();
		while (getchar() != '\n');
		switch (antwort)
		{
		case '1':
			AusgabenEingeben();
			break;
		case '2':
			AusgabenAnzeigen();
			break;
		case '9':
			AusgabenSummieren();
			break;
		case '0':
		default:
			break;
		}
	} while (antwort != '0');

	return 0;
}

int main()
{
	//int monate[MONATE];
	for (int i = 0; i < MONATE; i++) { monate[i] = 0; }
	
	Menu();
	return 0;
}