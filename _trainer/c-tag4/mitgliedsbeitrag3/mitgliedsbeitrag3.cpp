// mitgliedsbeitrag3.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

char eingabe(void);
int berechnung(char, char);
void ausgabe(char, char, int);
void flush_stdin();

int main()
{
	char ein, v, s;
	int mitgliedsbeitrag;
	// ausgabe('n','n',500); 
	mitgliedsbeitrag = berechnung('n', 'n');
	ausgabe('n', 'n', mitgliedsbeitrag);

	mitgliedsbeitrag = berechnung('n', 'j');
	ausgabe('n', 'j', mitgliedsbeitrag);

	mitgliedsbeitrag = berechnung('j', 'n');
	ausgabe('j', 'n', mitgliedsbeitrag);

	mitgliedsbeitrag = berechnung('j', 'j');
	ausgabe('j', 'j', mitgliedsbeitrag);

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
		flush_stdin;
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

void flush_stdin() {
	while (getchar() != '\n');
}