// stringfunktionen_s51.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include "string.h"
const int zanzahl = 81;
int main()
{
	char s1[zanzahl] = "1234.5678";
	char s2[zanzahl] = "123.45678";
	char zeile[2 * zanzahl] = "123.45";
	int  i1 = 0, i2 = 0, l1 = 0, l2 = 0;
	float  f1 = 0, f2 = 0;


	printf("\nBitte zahl1 eingeben:");
	gets_s(s1, zanzahl);
	i1 = atoi(s1);
	f1 = atof(s1);
	l1 = strlen(s1);
	printf(" i1:%d f1:%f l1: %d\n", i1, f1, l1);
	printf("\nBitte zahl2 eingeben:");
	gets_s(s2, zanzahl);
	i2 = atoi(s2);
	l2 = strlen(s1);
	f2 = atof(s2);
	printf(" i2:%d f2:%f l2: %d\n", i2, f2, l2);
	//cout << " i2:" << i2 << " f2:" << f2 << " l2:" << l2 << endl;
	switch (strcmp(s1, s2)) {
	case -1: printf("s1 kleiner s2\n");
		break;
	case 0: printf("s1 gleich s2");
		break;
	case 1: printf("s1 groesser s2");

	}
	strncpy_s(zeile, s1, 5);
	strncat_s(zeile, s2, 5);
	printf("%s\n", zeile);
	//	cout << zeile << endl;
	return 0;
}

