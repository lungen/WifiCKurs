#include <stdio.h>

void zahlenTauschen(int *z1, int *z2)
{
	printf("Zu tauschende Zahlen: %i, %i", *z1, *z2);
	int tmp = *z1;
	*z1 = *z2;
	*z2 = tmp;
	printf("\nGetausche Zahlen: %i, %i\n", *z1, *z2);
}

int main()
{
	int a = 0;
	int b = 0;	
	printf("bitte geben sie die erste zahl ein: \n");
	scanf("%i", &a);
	printf("bitte geben sie die zweite zahl ein: \n");
	scanf("%i", &b);
	zahlenTauschen(&a, &b);

	return 0;
	
}


