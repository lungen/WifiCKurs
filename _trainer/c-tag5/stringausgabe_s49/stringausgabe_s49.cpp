// stringausgabe_s49.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#define zanzahl 81

int main()
{
	int i, j, k;
	char Zeichen, Eingabe[zanzahl], Ausgabe[zanzahl]
		;

	printf("Bitte geben Sie eine Zeichenkette ein: ");

	for (i = 0; i < zanzahl - 1 && (Zeichen = getchar()) != '\n'; i++)
		Eingabe[i] = Zeichen;
	Eingabe[i] = '\0';
	// umgekehrte Ausgabe direkt aus der Eingabe
	for (j = i - 1; j >= 0; j--)
		printf("%c", Eingabe[j]);
	printf("\n");
	k = i;
	i--;
	for (j = 0; j < zanzahl - 1; j++, i--) {
		Ausgabe[j] = Eingabe[i];
	}
	Ausgabe[k] = '\0';


	printf("\n%s\n", Eingabe);
	printf("\n%s\n\n", Ausgabe);
	return 0;
}