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
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			z[i][j] = i * length + j;
		}

	}
	printf(" ausgabe zeilenweise\n");
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			printf("%4d ", z[i][j]);
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

	printf(" ausgabe serpentinenweise\n");
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			printf("%4d ", z[i][j]);
		}
		printf("\n");
		i++;
		for (j = length-1; j >=0; j--)
		{
			printf("%4d ", z[i][j]);
		}
		printf("\n");



	}





}

