// fileausgabe1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <process.h>
FILE *stream;

int main(){
	int    i = 10;
	double fp = 1.5;
	char   s[] = "this is a string";
	char   c = '\n';
	//fopen_s(&stream, "\\\\srv10\\PQ_C412", "w");
	// für ausgabe am drucker
	fopen_s(&stream, "datei.txt", "w");
	fprintf_s(stream, "%s%c", s, c);
	fprintf_s(stream, "%d\n", i);
	fprintf_s(stream, "%f\n", fp);
	fclose(stream);
	system("type datei.txt");
	return 0;
}

