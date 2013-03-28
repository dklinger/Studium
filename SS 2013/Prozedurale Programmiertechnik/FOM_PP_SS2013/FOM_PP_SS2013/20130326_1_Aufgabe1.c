#include <stdio.h>

int main()
{
	double zahl1, zahl2, erg, error = 0;

	char myOperator;
	
	char nochmal = 'n';

	do
	{
		printf("Zahl 1: ");
		scanf("%lf", &zahl1);

		printf("Zahl 2: ");
		scanf("%lf", &zahl2);

		//Löscht den Eingabepuffer, da ansonsten "\n" direkt in die Variable myOperator geschrieben würde
		fflush(stdin);

		printf("Operator: ");
		scanf("%c", &myOperator);

		switch(myOperator)
		{
			case '+':
				erg = zahl1 + zahl2;
				break;
			case '-':
				erg = zahl1 - zahl2;
				break;
			case '*':
				erg = zahl1 * zahl2;
				break;
			case '/':
				if(zahl2 > 0)
				{
					erg = zahl1 / zahl2;
				}
				else
				{
				printf("Division durch 0 ist nicht zugelassen!\r\n");
				error = 1;
				}
				break;
			default:
				printf("Nicht zugelassener Operator!\r\n");
				error = 1;
				break;
		}

		if(!error)
		{
			printf("Ergebnis: %.2lf\r\n", erg);
		}

		fflush(stdin);

		printf("Nochmal (y/n): ");
		scanf("%c", &nochmal);

	}while(nochmal == 'y');

	return 0;
}