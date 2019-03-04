#include <stdio.h>
#include <stdlib.h>

#define DATEI "C:\\temp\\Testdatei.txt"

FILE *stream;

void Lesen(char file[])
{
	if((stream = fopen(file, "r")) == NULL)
	{
		printf("\nFehler beim oeffnen");
		exit(1);
	}
	printf("\nDatei wurde geoeffnet: ");
	puts(file);
	printf("\n");

	int counter = 1;
	int err = 0;
	int newLine = 1;
	int leerZeichen = 8;
	while((err = fgetc(stream)) != EOF)
	{
		if (newLine)
		{
			printf("%04i ", counter);
			counter++;
			newLine = 0;
		}

		if (err == '\t')
		{
			int c = 0;

			while (c < leerZeichen)
			{
				printf(" ");
				c++;
			}
		}
		else
		{
			printf("%c", err);
		}


		if (err == '\n')
		{
			newLine = 1;
		}

	}
	fclose(stream);
	printf("\nFIN: %i\n", counter);

}


int main()
{
	char datei[80] = DATEI;
	Lesen(datei);
	return 0;
}

