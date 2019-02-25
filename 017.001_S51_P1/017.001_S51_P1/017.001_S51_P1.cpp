// https://www.geeksforgeeks.org/storage-for-strings-in-c/

// 017.001_S51_P1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
//#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 512

int main()
{
	char s1[MAX];
	char s2[MAX];
	for (int i = 0; i < MAX; i++) { s1[i] = s2[i] = 0; }
	char c = '#';

	do
	{
		printf("1. String eingeben: \n");
		gets_s(s1);
		printf("2. String eingeben: \n");
		gets_s(s2);
		printf("Laenge Zeichen 1: %d\n", strlen(s1));
		printf("Laenge Zeichen 2: %d\n", strlen(s2));

		int sumI = atoi(s1);
		sumI += atoi(s2);
		printf("sum of integer: %d", sumI);
		
		double sumF = atof(s1);
		sumF += atof(s2);
		printf("sum of float: %f", sumF);

		int res = strcmp(s1, s2);

		if  (res < 0)
		{
			printf("String 1 ist kleiner\n");
		}
		else 
		{
			if (res > 0)
			{
				printf("String 2 ist kleiner\n");
			}
			else 
			{
				printf("Beider Strings gleich lang,\n");
			}
		}

		char sX[2 * MAX] = "";
		//for (int i = 0; i < MAX; i++) { sX[i]=' '; }
		strncat_s(sX, s1, 5);
		printf("Erste  fuenf Buchstaben #1: \n");
		puts(sX);
		//sX = { "" };
		strncat_s(sX, s2, 5);
		printf("Erste fuenf Buchstaben #2: \n");
		puts(sX);

		printf("Nochmals? (j/n)\n");
		c = getchar();
		while (getchar() != '\n');
	} while (c != 'n');

	return 0;
}
