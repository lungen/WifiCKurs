// menue_s42_bsp2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
char eingabe(void);
int berechnung(char, char);
void ausgabe(char, char, int);
int mitgliedsbeitrag();
int rabattstaffel();
int fahrkartenschalter();

int main()
{
	char c = 'x';
	while (c != '0')
	{
		system("cls");
		printf("\n 1. Mitgliedsbeitrag");
		printf("\n 2. Fahrkartenschalter");
		printf("\n 3. Rabattstaffel");
		printf("\n 0. Beendigung");
		printf("\n\n");
		printf("\nWaehlen Sie bitte gewuenschten Menuepunkt: ");

		c = getchar();
		while (getchar() != '\n');
		system("cls");

		switch (c)
		{
		case '1':
			mitgliedsbeitrag();
			break;
		case '2':
			fahrkartenschalter();
			break;
		case '3':
			rabattstaffel();
			break;
		case '0':  // Menue Ende
			return 0;
			break;
		default:
			printf("\nEingabe falsch!");;
		}

		//		if (c == '0')
		//			return 0;

		while (getchar() != '\n');
		printf("\n\n\n");
		printf("Weiter mit Enter!");
		c = getchar();
	}
	return 0;
}

int mitgliedsbeitrag()
{
	char ein, v, s;
	int mitgliedsbeitrag;

	printf("\nVerheiratet? (j/n)");
	v = eingabe();
	printf("\nStudiert? (j/n)");
	s = eingabe();
	mitgliedsbeitrag = berechnung(v, s);
	ausgabe(v, s, mitgliedsbeitrag);
	return 0;
}

int berechnung(char verheiratet, char studiert)
{
	int beitrag = 0;
	if (verheiratet == 'j')
	{
		if (studiert == 'j')
			beitrag = 200;
		else
			beitrag = 400;
	}
	else
	{
		if (studiert == 'j')
			beitrag = 300;
		else
			beitrag = 500;
	}
	return beitrag;
}




char eingabe(void)
{
	char wert;
	do {
		wert = getchar();
		while (getchar() != '\n');
	} while (wert != 'j'&&wert != 'J'&&wert != 'n'&&wert != 'N');
	if (wert < 'a')// mach kleinbuchstaben
		wert += 32;
	return wert;
}

void ausgabe(char verheiratet, char studiert, int beitrag)
{
	printf("\nverheiratet: %c  studiert %c   Mitgliedsbeitrag: %d\n"
		, verheiratet, studiert, beitrag);
}

int rabattstaffel()
{
	float endpreis, nachlass;
	int preis, rabatt;

	printf("Bitte geben Sie den Betrag ein: \n");
	scanf_s("%d", &preis);
	//preis=20;
	rabatt = 0;

	if (preis >= 5000)
		rabatt = 20;
	else if (preis >= 3000)
		rabatt = 14;
	else if (preis >= 2000)
		rabatt = 8;
	else if (preis >= 1000)
		rabatt = 3;
	endpreis = preis * (100.0 - rabatt) / 100.0;
	nachlass = preis * (rabatt / 100.0); // nachlass = preis - endpreis;
	printf("\nRabatt:: %d %% %.2f EUR\n", rabatt, nachlass);
	printf("Endpreis: %.2f EUR\n", endpreis);
	return 0;
}

int fahrkartenschalter()
{
	int KAnzahl;
	float KPreis;
	int KProzent;
	float KGesamt;
	float Ersparnis;
	float KErmaessigtEinzel;
	/* Eingabe aller Daten*/
	printf("# Bitte geben Sie die Anzahl der Karten ein: ");
	scanf_s("%d", &KAnzahl);
	printf("# Bitte geben Sie den Preis pro Karte ein:   ");
	scanf_s("%f", &KPreis);
	printf("# Bitte geben Sie den Rabatt in %% ein:       ");
	scanf_s("%d", &KProzent);
	printf("#\n");

	/* Fehlerbehandlung */
	if (KAnzahl <= 0)	/* Es muss mindestens 1 Karte gekauft werden */
	{
		printf("# Fehler: Sie muessen mindestens 1 Karte kaufen!\n");
		return 1;
	}/* Der Preis muss mit höher 0 angegeben werden */
	if (KPreis <= 0)
	{
		printf("# Fehler: Der Preis muss hoeher als 0 sein\n");
		return 2;
	}
	/* Prozentangabe muss zwischen 0 und 100 liegen */
	if (KProzent < 0 || KProzent > 100)
	{
		printf("# Fehler: Die Ersparnis muss zwischen 0 und 100 Prozent liegen.\n");
		return 3;
	}

	/* Berechnung aller notwendigen Zahlen */
	Ersparnis = KPreis * KProzent / 100;
	KErmaessigtEinzel = KPreis - Ersparnis;
	KGesamt = KAnzahl * KErmaessigtEinzel;

	/* Ausgabe der Preise */
	printf("#\n#\n#\n");
	printf("# Es werden %d Karten zu je %.2f gekauft\n", KAnzahl, KErmaessigtEinzel);
	printf("# Die Gesamtkosten betragen: %.2f Euro\n", KGesamt);
	return 0;
}