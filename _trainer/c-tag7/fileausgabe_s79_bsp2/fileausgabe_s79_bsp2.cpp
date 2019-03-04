// fileausgabe_s79_bsp2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>

#include <process.h>

#define FILENAME "c:\\temp\\taschenrechner.cpp"

int main(){

	FILE *stream;
	FILE *streamout;
	int i = 1, err = 0;
	char   s[] = "this is a string";
	char   c;
	fopen_s(&streamout, "out.txt", "w");
	err = fopen_s(&stream, FILENAME, "r");
	if (err == 0) {
		fprintf_s(streamout, "\n%4d   ", i++);
		while ((c = getc(stream)) != EOF)
		{
			if (c == '\n') {
				fprintf_s(streamout, "\n%04d   ", i++);
			}else
			if (c=='\t'){
				fprintf_s(streamout, "%s","   ");
			} 
			else
				fprintf_s(streamout, "%c", c);
		}
		fprintf_s(streamout, "\n\n");
		fclose(stream);
		fclose(streamout);
	}
	//system( "type txtdatei.txt" );
	return 0;
}