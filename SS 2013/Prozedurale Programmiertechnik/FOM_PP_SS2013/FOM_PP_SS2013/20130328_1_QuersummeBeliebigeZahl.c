#include <stdio.h>

int main()
{
	int zahl;
	int letzteZiffer = 0, quersumme;
	char nochmal;
	do
	{
		quersumme = 0;

		printf("Bitte Zahl eingeben: ");
		scanf("%d", &zahl);

		while(zahl > 0)
		{
			letzteZiffer = zahl % 10;
		
			quersumme += letzteZiffer;

			zahl = zahl / 10;
		}

		printf("Quersumme: %d\r\n", quersumme);

		printf("Noch einmal? ");
		fflush(stdin);
		scanf("%c", &nochmal);
	}while(nochmal =='j' || nochmal == 'J');


	return 0;
}