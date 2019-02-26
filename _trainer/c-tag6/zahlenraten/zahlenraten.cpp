// zahlenraten.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
const unsigned char AE = 142;
const unsigned char ae = 132;
const unsigned char OE = 153;
const unsigned char oe = 148;
const unsigned char UE = 154;
const unsigned char ue = 129;
const unsigned char ss = 225;

int main()
{
	int min = 1;
	int mid;
	int max = 1000;
	char antwort;
	char antwort2;

	printf("Bitte denke dir eine Zahl zwischen 1 und 1000 aus!\n");

	do
	{
		mid = (min + max) / 2;

		printf("Ist deine Zahl: %d ? (j/n)\n", mid);
		antwort = getchar();
		while(getchar()!='\n');

		if (antwort != 'j' && antwort != 'J' && antwort != 'n' && antwort != 'N')
		{
			printf("Ung%cltige eingabe!\n",ue);
			continue;
		}

		if (antwort == 'n' || antwort == 'N')
		{
			printf("Ist deine Zahl gr%c%cer oder kleiner? (g/k)\n",oe,ss);
			antwort2 = getchar();
			while(getchar()!='\n');

			if (antwort2 != 'g' && antwort2 != 'G' && antwort2 != 'k' && antwort2 != 'K')
			{
				printf("Ung%cltige eingabe!\n",ue);
				continue;
			}

			if (antwort2 == 'g' || antwort2 == 'G')
			{
				min = mid + 1;
			}
			else
				max = mid - 1;
		}
	} while (antwort != 'j' && antwort != 'J');

}

