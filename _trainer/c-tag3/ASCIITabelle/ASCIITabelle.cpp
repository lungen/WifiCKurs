// ASCIITabelle.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

int main()
{
	char  cu = 'x';
	char co = 'A', c, erg;
	char eingabe;
	int zaehler = 0;

	do {
		printf("Zeichen1 eingeben:\n");
		cu = getchar();
		while (getchar() != '\n');
		printf("Zeichen2 eingeben:\n");
		co = getchar();
		while (getchar() != '\n');
		zaehler = 0;
		if (cu > co) {
			while (cu >= co) {
				printf("%c ", cu);
				zaehler++;
				//	if (zaehler % 10 ==0)
				//		printf("\n");
				cu--;
			}
		}
		else {
			while (cu <= co) {
				printf("%c ", cu);
				zaehler++;
				//    if (zaehler % 10 ==0)
				//	  printf("\n");
				cu++;
			}
		}
		while (getchar() != '\n');
		printf("\nWeiter (j/n):\n");
		eingabe = getchar();
		while (getchar() != '\n');
	} while (eingabe == 'j' || eingabe == 'J');
	return 0;

}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
