#include "pch.h"
#include <iostream>

int main()
{
	int anzahlDerFahrkarten = 0;
	float preisDerFahrkarte = 0.0;
	int ermasssigung = 0;
	float ermassigungBerechnung = 0.0;
	float gesamtPreis = 0.0;

	printf("Bitte die Anzahl der Fahrkarten eingeben:\t$\n");
	scanf_s("%d", &anzahlDerFahrkarten);
	printf("Bitte den Prei einer Fahrkarte eingeben:\n");
	scanf_s("%f", &preisDerFahrkarte);
	printf("Bitte die Ermaessigung der Fahrkarte eingeben:\n");
	scanf_s("%d", &ermasssigung);
	ermassigungBerechnung = preisDerFahrkarte - (preisDerFahrkarte / 100) * ermasssigung;
	printf("Anzahl der Fahrkarten = %d\n", anzahlDerFahrkarten);
	printf("Ermaessigter Preis einer Fahrkarte = %f\n", ermassigungBerechnung);
	gesamtPreis = ermassigungBerechnung * anzahlDerFahrkarten;
	printf("Ermassigter Preis bei allen Fahrkarte = %f\n", gesamtPreis);
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
