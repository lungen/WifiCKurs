// 010.001_MitgliedsbeitragMitFunktionen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

#include "pch.h"
#include <iostream>

int eingabeStudent(void);
int eingabeVerheiratet(void);
int berechnung(int, int);
void ausgabe(int);

int eingabeStudent(void)
{
	char antwort = ' ';
	printf("Sind Sie ein Studen? (j/n)\n");
	scanf_s("%c", &antwort);
	while (getchar() != '\n');
	if (antwort == 'j' || antwort == 'J')
	{
		return 1;
	}

	return 0;
}

int eingabeVerheiratet(void)
{
	char antwort = ' ';
	printf("Sind Sie verheiratet? (j/n)\n");
	scanf_s("%c", &antwort);
	while (getchar() != '\n');
	if (antwort == 'j' || antwort == 'J')
	{
		return 1;
	}

	return 0;
}

int berechnung(int student, int verheiratet)
{
	int betrag = 0;

	if (verheiratet)
	{
		printf("Der Verheirate-Sein-Nachlass betraegt: %d\n", 100);
		betrag += 100;
	}

	if (student) 
	{
		printf("Der Studentennachlass betraegt: %d\n", 200);
		betrag += 200;
	}

	return betrag;
}

void ausgabe(int betrag)
{
	printf("Der Gesamtbetrag betraegt: %d", betrag);
}

int main()
{
	int student = 0;
	int verheiratet = 0;
	// weder Student noch verheirate:
	int gesamtBetrag = 500;

	// 1
	student = eingabeStudent();
	// 1
	verheiratet = eingabeVerheiratet();
	// berechnung
	gesamtBetrag -= berechnung(student, verheiratet);
	// ausgabe
	ausgabe(gesamtBetrag);

	return 0;
}