// stringvergleich.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#define zstringlange 20
int main()
{
	int i;
	char String1[zstringlange], String2[zstringlange];
	char Wort, vergleich;

	printf("Bitte geben Sie den ersten String ein: ");
	for (i = 0; i < zstringlange && (Wort = getchar()) != '\n'; i++)
		String1[i] = Wort;
	String1[i] = '\0';

	printf("\nBitte geben Sie den zweiten String ein: ");
	for (i = 0; i < zstringlange && (Wort = getchar()) != '\n'; i++)
		String2[i] = Wort;
	String2[i] = '\0';
	i = 0;
	while (String1[i] != '\0' && String2[i] != '\0')
	{
		vergleich = (String1[i] - String2[i]);
		if (vergleich != 0)
			break;
		i++;
	}

	if (vergleich < 0)
		printf("%s kleiner %s\n\n", String1, String2);
	else
		if (vergleich > 0)
			printf("%s groesser %s\n\n", String1, String2);
		else
			printf("Sind beide gleich");


	//printf("\n%s\n",String1);
	//printf("\n%s\n\n",String2);

	return 0;
}

