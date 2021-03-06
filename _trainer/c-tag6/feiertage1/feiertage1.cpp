// feiertage1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
const int tanzahl = 31;
const int manzahl =12;
void ft_initialize( char ft[][tanzahl]);
void ft_listenausgabe( char ft[][tanzahl]);
void ft_eingabe( char ft[][tanzahl], int jj);
int monat_eingabe(void);
int tag_eingabe(int mm);
int main()
{
	char feiertage[manzahl][tanzahl];
	int monat1, tag1;        //  char monatstage[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	ft_initialize(feiertage);
	feiertage[0][0] = 1;  //neujahr
	feiertage[0][5] = 1;  // drei könige
	feiertage[10][0] = 1; // allerheiligen
	feiertage[9][25] = 1;  // nationalfeiertag
	feiertage[11][7] = 1;  // marienfeiertag
	ft_eingabe(feiertage, 2019);
	ft_listenausgabe(feiertage);
	//monat1=monat_eingabe();  // printf("\nMonat %d\n", monat1);  //tag1=tag_eingabe(monat1);
	// printf("\nTag %d\n",tag1);
	return 0;
}
void ft_initialize(char ft[][tanzahl])
{
	int tag, monat = 0;
	for (monat = 0; monat < manzahl; monat++)
		for (tag = 0; tag < tanzahl; tag++)
			ft[monat][tag] = 0;
}
void ft_listenausgabe(char ft[][tanzahl])
{
	int tag, monat = 0;
	for (monat = 0; monat < manzahl; monat++)
		for (tag = 0; tag < tanzahl; tag++)
			if (ft[monat][tag] != 0)
				printf("%2d.%2d\n", tag + 1, monat + 1);
}
int monat_eingabe(void)
{
	int monat;
	do {
		printf("\nGeben sie ein Monat ein! ");
		scanf_s("%d", &monat);
		printf("\n");
		while (getchar() != '\n');
	} while (monat > 12 || monat < 1);
	return monat;
}
int tag_eingabe(int mm)
{
	int tag, m;
	m = mm;
	do {
		printf("\nGeben sie einen richtigen Tag für Monat %d ein! ", m);
		scanf_s("%d", &tag);
		printf("\n");
		while (getchar() != '\n');
		if (tag >= 1 && tag <= 31)   //prüfung verbessern provisorium
			break;
	} while (1 == 1);
	return tag;
}
void ft_eingabe(char ft[][tanzahl], int jj)
{
	char eingabe;
	int mm, tt;
	do {
		mm = monat_eingabe();
		tt = tag_eingabe(mm);
		ft[mm - 1][tt - 1] = 1;
		printf("Beenden mit q!\n");
		eingabe = getchar();
		while (getchar()!='\n');
	} while (eingabe != 'q'&&eingabe != 'Q');
}

