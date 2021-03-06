// 018.001_S62_ZahlenRatSpiel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

#define MAX 1000

int Eingabe();
void Raten(int);

int Eingabe()
{
	int zahl = -1;

	do
	{
		printf("Bitte eine Zahl zwischen 1 und %d eingeben: ", MAX);
		//scanf_s("%d", &zahl);
		zahl = 555;

	} while(zahl < 1 || zahl > MAX);

	return zahl;
}

void Raten(int geheimZahl)
{
	int min = 0;
	int max = MAX;
	int mw = 0;

	do
	{
		mw = (min + max) / 2;
		printf("MW: %d\n", mw);

		if (mw > geheimZahl)
		{
			max = mw-1;
		} 
		else
		{
			if (mw < geheimZahl) 
			{
				min = mw+1;
			}
			else
			{
				printf("Bingo geheimZahl: %d = %d (rateZahl)\n", geheimZahl, mw);
			}
		}
	} while (mw != geheimZahl);
}


int main()
{
	int a[10] = { 11, 111, 333, 456, 789, 890, 509, 999, 701, 3 };
	int zahl = Eingabe();
	
	int n = 0;
	while (n < 10) {
		Raten(a[n]);
		n++;
	}

}

