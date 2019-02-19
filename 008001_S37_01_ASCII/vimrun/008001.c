#include <stdio.h>
int main()
{
	int a, b, antwort;
	
	do 
	{
		printf("Bitte erstes Zeichen eingeben: \n");
		scanf("%c", &a);
		getchar();
		printf("Bitte zweites Zeichen eingeben: \n");
		scanf("%c", &b);
		getchar();
		printf("\nIhre Eingabe war: %c, %c \n", a, b);
		if (((a  >= 32 ) && (a <= 160)) && ((b  >= 32 ) && (b <= 160)))
		{
			if (a> b)
			{
				int tmp = 0;
				tmp = 0;
				a = b;
				b = tmp;
			}

			while (a < b-1)
			{
				printf("%c", ++a);
			}

		} else
		{
			printf("\nIhre Eingabe war ausserhalb der gueltigen Werte: %c, %c", a, b);
		}
		printf("\nNochmal ??? (j/n)");
		scanf("%c", &antwort);

	} while (antwort != 'n');

	return 0;
}
