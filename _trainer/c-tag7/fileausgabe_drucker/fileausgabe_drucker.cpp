// fileausgabe_drucker.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
FILE *stream;
int main()
{
	int    i = 10;
	double fp = 1.5;
	char   s[] = "this is a string";
	char   cd, c = '\n';
	fopen_s(&stream, "\\\\srv10\\PQ_C412", "w");
	// für ausgabe am drucker
//	fopen_s(&stream, "fprintf_s.out", "w");

	fprintf_s(stream, "%s%c", s, c);
	fprintf_s(stream, "%d\n", i);
	fprintf_s(stream, "%f\n", fp);
	for (i = 0; i < 100; i++)
		fprintf_s(stream, "%d\n", i);

	fclose(stream);

	fopen_s(&stream, "fprintf_s.out", "r");
	for (i = 0; (cd = getc(stream)) != EOF; i++)
		putchar(cd);

	fclose(stream);
	return 0;
}