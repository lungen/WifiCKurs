// XxX.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
const int length = 10;
int main()
{
	int z[10][10];
	int i, j;
  //  initialisieren 
	for ( i = 0; i < length; i++)
	{
		for ( j = 0; j < length; j++)
		{
			z[i][j] = i * length + j;
		}

	}
	printf(" ausgabe zeilenweise\n");
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			printf("%4d ",z[i][j]);
		}
		printf("\n");
	}

	printf("\n");		printf("spaltenweise\n");

	//ausgabe spaltenweise
	for (j = 0; j < length; j++)
	{
		for (i = 0; i < length; i++)
		{
			printf("%4d ", z[i][j]);
		}
		printf("\n");
	}






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
