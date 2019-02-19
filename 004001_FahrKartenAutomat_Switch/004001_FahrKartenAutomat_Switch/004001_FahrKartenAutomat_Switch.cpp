#include "pch.h"
#include <iostream>

int main()
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
