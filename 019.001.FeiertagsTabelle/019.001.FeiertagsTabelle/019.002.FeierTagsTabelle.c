#include <stdio.h>
#define MAX 20
#define STRMAX 81
#define TRUE 1
#define FALSE 0

struct datum {
	int tt;
	int mm;
} ;

struct datum feiertage[MAX];

int anzahlFeiertage = 0;
int firstRun = TRUE;

void Ausgabe();
void Eingabe();
void Menu();
void Sortieren();


void Sortieren()
{
	// minimum sort
	int min;
	struct datum hilf;

	int n = 0;
	while (n < 2)
    {
        for (int i = 0; i < anzahlFeiertage-1; i++)
        {
            min = i;
            for (int j = i+1; j < anzahlFeiertage; j++)
            {
                if (n == 0)
                {
                    if (feiertage[j].mm < feiertage[min].mm)
                    {
                        min = j;
                    }
                }
                else
                {
                    if (feiertage[j].tt < feiertage[min].tt && feiertage[j].mm == feiertage[min].mm)
                    {
                        min = j;
                    }

                }
            }
            hilf = feiertage[i];
            feiertage[i] = feiertage[min];
            feiertage[min] = hilf;
        }
        n++;
    }
}

void Ausgabe()
{
	int n = 0;
	while (n < anzahlFeiertage)
	{
		printf("%d.%d\n", feiertage[n].tt, feiertage[n].mm);
		n++;
	}
}

void Eingabe()
{

	int i = 0;
	int anz = 0;
	char s[STRMAX];
	int debugMax = 8;
	double sFeierTageEingabe[] = { 2.1, 3.4, 24.5, 9.9, 11.8, 12.6, 25.1, 1.1 };

	do 
	{
		printf("%d .Feiertag eingben: [E = EXIT]\n", anz + 1);
		printf("(Tag.Monat)\n");
		//gets_s(s);
		//char tmp[];
		sprintf(s, "%.1f", sFeierTageEingabe[anz]);

		if (s[0] == 'e' || s[0] == 'E')
		{
			break;
		}

		// Leerzeichen Weglassen auslesen:
		for (i = 0; s[i] == ' ' || s[i] == '\t'; ++i)
			;

		// Tag auslesen
		for (feiertage[anz].tt = 0; s[i] != '.' && s[i] != '\0'; ++i)
		{
			feiertage[anz].tt = feiertage[anz].tt * 10 + s[i] - '0';
		}
		// Uberprfuefen ob gueltiges datum
		if (s[i++] != '.')
		{
			printf("[%s]: Tag ist Ungueltig.\n", s);
			// wieder Feiertag eingeben
			continue;
		}

		// Monat ausgeben
		for (feiertage[anz].mm = 0; s[i] != '.' && s[i] != '\0'; ++i)
		{
			feiertage[anz].mm = feiertage[anz].mm * 10 + s[i] - '0';
		}
		// Uberprfuefen ob gueltiges datum
		if (feiertage[anz].mm < 1 || feiertage[anz].mm > 12)
		{
			printf("[%s]: Monat Ungueltig.\n", s);
			// wieder Feiertag eingeben
			continue;
		}
		printf("\t Ihre Eingabe: %i.%i\n", feiertage[anz].tt, feiertage[anz].mm);
		anz++;
	} while(anz < MAX && anz < debugMax);

	anzahlFeiertage = anz;
}

void Menu()
{
	char eingabe = '0';
	do
	{
		    if (firstRun)
            {
			    Eingabe();
			    firstRun = FALSE;
            }
                Sortieren();
                Ausgabe();
			    firstRun = TRUE;
			    break;
		do
		{
			printf("\n[1] Feiertage ausgeben\n");
			printf("[2] Feiertage eingeben\n");
			printf("[0] = EXIT\n");
			eingabe = getchar();
			while (getchar() != '\n');
		} while (eingabe < '0' || eingabe > '9');

		switch (eingabe)
		{
			case '1':
				Sortieren();
				Ausgabe();
				break;

			case '2':
				Eingabe();
				break;

			default:
				break;
		};

	} while(eingabe != '0');
}


int main()
{
    
	Menu();
	return 0;
}
