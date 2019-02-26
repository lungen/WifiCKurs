// 019.001.FeiertagsTabelle.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#define MAX 20
#define STRMAX 81

struct datum {
	int tt;
	int mm;
} ;

struct datum feiertage[MAX];

int anzahlFeiertage = 0;

void Ausgabe();
void Eingabe();
void Menu();
void Sortieren();


void Sortieren()
{
	// minimum sort
	int min;
	struct datum hilf;

	int n = 0;
	for (int i = 0; i < anzahlFeiertage-1; i++)
	{
		min = i;
		for (int j = 0; j < anzahlFeiertage; j++)
		{
			if (feiertage[j].mm < feiertage[min].mm)
			{
				min = j;
			}
		}
		hilf = feiertage[i];
		feiertage[i] = feiertage[min];
		feiertage[min] = hilf;
	}

}
void Ausgabe()
{
	int n = 0;
	while (n < anzahlFeiertage)
	{
		printf("%d.%d\n", feiertage[n].tt, feiertage[n].mm);
		n++;
	}
}

void Eingabe()
{
	int i = 0;
	int anz = 0;
	char s[STRMAX];
	double sFeierTageEingabe[3] = { 11.8, 12.6, 25.1 };

	do 
	{
		printf("%d .Feiertag eingben: [E = EXIT]\n", anz + 1);
		printf("(Tag.Monat)\n", i + 1);
		//gets_s(s);
		//char tmp[];
		sprintf_s(s, "%.1f", sFeierTageEingabe[anz]);

		if (s[0] == 'e' || s[0] == 'E')
		{
			break;
		}

		// Leerzeichen Weglassen auslesen:
		for (i = 0; s[i] == ' ' || s[i] == '\t'; ++i)
			;

		// Tag auslesen
		for (feiertage[anz].tt = 0; s[i] != '.' && s[i] != '\0'; ++i)
		{
			feiertage[anz].tt = feiertage[anz].tt * 10 + s[i] - '0';
		}
		// Uberprfuefen ob gueltiges datum
		if (s[i++] != '.')
		{
			printf("%s Ungueltig.\n", s);
			// wieder Feiertag eingeben
			continue;
		}

		// Monat ausgeben
		for (feiertage[anz].mm = 0; s[i] != '.' && s[i] != '\0'; ++i)
		{
			feiertage[anz].mm = feiertage[anz].mm * 10 + s[i] - '0';
		}
		// Uberprfuefen ob gueltiges datum
		if (feiertage[anz].mm < 1 || feiertage[anz].mm > 12)
		{
			printf("%s Ungueltig.\n", s);
			// wieder Feiertag eingeben
			continue;
		}
		printf("\t Ihre Eingabe: %i.%i\n", feiertage[anz].tt, feiertage[anz].mm);
		anz++;
	} while(anz < MAX && anz < 3);

	anzahlFeiertage = anz;
}

void Menu()
{
	char eingabe = '0';
	do
	{
		do
		{
			//Eingabe();
			printf("\n[1] Feiertage ausgeben\n");
			printf("[2] Feiertage eingeben\n");
			printf("[0] = EXIT\n");
			eingabe = getchar();
			while (getchar() != '\n');
		} while (eingabe < '0' || eingabe > '9');

		switch (eingabe)
		{
			case '1':
				Sortieren();
				Ausgabe();
				break;

			case '2':
				Eingabe();
				break;

			default:
				break;
		};

	} while(eingabe != '0');
}


int main()
{
    
	Menu();
	return 0;
}