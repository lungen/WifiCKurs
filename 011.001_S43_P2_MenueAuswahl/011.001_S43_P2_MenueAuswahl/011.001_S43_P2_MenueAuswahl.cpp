// 011.001_S43_P2_MenueAuswahl.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

int BerechneFlaeche(void);
int FahrKartenAutomat(void);
int ZentimeterInchTabelle(void);
int TaschenRechner(void);
int menu(void);

int ZentimeterInchTabelle(void)
{
	float v = 2.5;

	for (int i = 0; i <= 10; i++)
	{
		printf("%2d Inch = %.2f Zentimeter.\n", i, (v * i));
	}

	return 0;
}

int FahrKartenAutomat(void)
{
	// 1.) ungueltige eingabe von
			//- preis ( preis => 0 && preis <= 100)
			//- anzahl der fahrkarten ( anzahl < 1)
			//- rabatt ( rabatt < 0 || rabatt > 100)
	// gibt eine Fehlermedlung aus.

	int anzahlDerFahrkarten = 0;
	float preisDerFahrkarte = 0.0;
	int ermaessigung = 0;
	float ermassigungBerechnung = 0.0;
	float gesamtPreis = 0.0;

	printf("Bitte die Anzahl der Fahrkarten eingeben:\n");
	//scanf_s("%d", &anzahlDerFahrkarten);
	anzahlDerFahrkarten = 5;
	if (anzahlDerFahrkarten < 1)
	{
		printf("Ungueltige Eingabe bei Anzahl der Fahrkarten: %d\n\n", anzahlDerFahrkarten);
	}
	else
	{
		printf("Bitte den Prei einer Fahrkarte eingeben:\n");
		//scanf_s("%f", &preisDerFahrkarte);
		preisDerFahrkarte = 3;

		if (preisDerFahrkarte < 0 || preisDerFahrkarte > 100)
		{
			printf("Ungueltige Eingabe beim Preis der Fahrkarten: %f", preisDerFahrkarte);
		}
		else
		{
			printf("Bitte die Ermaessigung der Fahrkarte eingeben:\n");
			//scanf_s("%d", &ermasssigung);
			ermaessigung = 10;
			if (ermaessigung < 0 || ermaessigung > 100)
			{
				printf("Ungueltige Eingabe bei der Ermaessigung der Fahrkarten: %d", ermaessigung);
			}
			else
			{
				ermassigungBerechnung = preisDerFahrkarte - (preisDerFahrkarte / 100) * ermaessigung;
				printf("Anzahl der Fahrkarten = %d\n", anzahlDerFahrkarten);
				printf("Einzelpreis der Fahrkarte = %.2f\n", preisDerFahrkarte);
				printf("Ermaessigter Preis einer Fahrkarte = %.2f\n", ermassigungBerechnung);
				gesamtPreis = ermassigungBerechnung * anzahlDerFahrkarten;
				printf("Ermassigter Preis bei allen Fahrkarte = %.2f\n", gesamtPreis);

				return 0;
			}
		}
	}
}

int BerechneFlaeche(void)
{
	int breite;
	int laenge;
	int fleache;

	// Eingabe von Laenge und Breite
	printf("Laenge eingeben: ");
	laenge = 11;
	//scanf_s("%d", &laenge);
	printf("Breite eingeben: ");
	breite = 22;
	//scanf_s("%d", &breite);

	fleache = laenge * breite;

	printf("Flaeche betraegt: %d", fleache);
	return 0;
}

int menu(void)
{
	char antwort = '-';

	do
	{
		printf("\n\n[Z]entimeterInchTabelle\n");
		printf("[F]ahrKartenAutomat\n");
		printf("[B]erechneFlaeche\n");
		printf("[T]aschenRechner\n");
		printf("[E]nde\n");
		antwort = getchar();
		//scanf_s("%c", &antwort);
		while (getchar() != '\n');
		system("cls");

		switch (antwort)
		{
			case 'z':
			case 'Z':
				ZentimeterInchTabelle();
				break;
			case 'f':
			case 'F':
				FahrKartenAutomat();
				break;
			case 'b':
			case 'B':
				BerechneFlaeche();
				break;
			case 't' :
			case 'T' :
				TaschenRechner();
			case 'e':
			case 'E':
				break;
			default:
				antwort = '-';
				break;
		}
	} while (antwort != 'E' && antwort != 'e');
	return 0;
}

int TaschenRechner(void)
{
	// S. 43 - TaschenRechner
	return 0;
}

int main()
{
	menu();
	return 0;
}