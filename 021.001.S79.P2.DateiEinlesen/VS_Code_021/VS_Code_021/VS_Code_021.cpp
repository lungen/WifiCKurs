// VS_Code_021.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#define DATEI "C:\\temp\\Testdatei.txt"

FILE *stream;

void Lesen(char file[])
{
	//if ((stream = fopen_s(file, "r")) == NULL)
	if ((stream = fopen_s(file)) == NULL)
	{
		printf("\nFehler beim oeffnen");
		exit(1);
	}
	printf("\nDatei wurde geoeffnet: ");
	puts(file);
	printf("\n");

	int counter = 1;
	int err = fgetc(stream);
	//while(!feof(stream))
	while (!feof(stream))
	{
		printf("%i ", counter);
		while (err != '\n')
		{
			printf("%c", err);
			err = fgetc(stream);
		}

		//putchar(err);
		err = fgetc(stream);
		counter++;
	}
	fclose(stream);
	printf("\nFIN: %i\n", counter);

}


int main()
{
	char datei[80] = DATEI;
	Lesen(datei);
	return 0;
}


