// taschenrechner.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

char coperator(void);
char weiter(void);
float operand(void);
float berechnung(void);
int main()
{
	//		printf("\n%c",weiter());
	//	printf("\n%c",coperator());
	//	printf("\n%f\n",operand());
	//printf("\n%f\n",berechnung());
	do
		printf("\n%f\n", berechnung());
	while (weiter() == 'j');
	return 0;
}
char coperator()
{
	char zeichen;
	do
	{
		printf("Geben Sie + - * /oder = ein");
		zeichen = getchar();
		while (getchar() != '\n');//fflush(stdin);
	} while (zeichen != '+' && zeichen != '-' && zeichen != '*' && zeichen != '/' &&zeichen != '=');
	return zeichen;
}
char weiter()
{
	char zeichen;
	do
	{
		printf("\nWeiter? ( j / n )");
		zeichen = getchar();
		while (getchar() != '\n');
	} while (zeichen != 'j' && zeichen != 'n');
	return zeichen;
}
float operand()
{
	float zahl;
	printf("\nGeben Sie eine Zahl ein:");
	scanf_s("%f", &zahl);
	while (getchar() != '\n');
	return zahl;
}

float berechnung()
{
	float ergebnis;
	char op;
	ergebnis = operand();
	do
	{
		op = coperator();
		switch (op)
		{
		case '+':
			ergebnis += operand();
			break;
		case '-':
			ergebnis -= operand();
			break;
		case '*':
			ergebnis *= operand();
			break;
		case '/':
			ergebnis /= operand();
			break;
		}
	} while (op != '=');
	return ergebnis;
}