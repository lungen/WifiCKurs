// fileread1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <process.h>

#define FILENAME "datei.txt"

int main(){
	FILE *stream;
	int i = 1, err = 0;
	char   s[] = "this is a string";
	char   c;
	err = fopen_s(&stream, FILENAME, "r");
	if (err == 0) {
		while ((c = getc(stream)) != EOF){
			printf("%c", c);
		}
		printf("\n\n");
		fclose(stream);
	}
	system( "type datei.txt" );
	return 0;
}