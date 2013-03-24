#include <stdio.h>

int main()
{
	double kilometerGefahren, literGetank, verbrauchInLiter;
	
	printf("Gefahrene Kilometer: ");
	scanf("%lf", &kilometerGefahren);
	
	printf("Getankte Liter: ");
	scanf("%lf", &literGetank);

	verbrauchInLiter = (literGetank / kilometerGefahren) * 100;

	printf("Verbrauch: %.2lf l/100km\n", verbrauchInLiter);

	if(verbrauchInLiter < 8)
	{
		printf("Alles in Ordnung\n");
	}
	else
	{
		printf("Neues Auto kaufen\n");
	}

	return 0;
}