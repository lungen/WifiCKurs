// zahlentauschen1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
void tauschen(int *, int *);
int main(){
	int a = 5;
	int b = 10;
	printf_s("a=%d b=%d\n", a, b);
	tauschen(&a, &b);
	printf_s("a=%d b=%d\n", a, b);
	return 0;
}

void tauschen(int *x, int *y){
	int hilf;
	hilf = *x;
	*x = *y;
	*y = hilf;
}