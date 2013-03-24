#include <stdio.h>

int main()
{
	double betrag;
	int laufzeit;
	
	printf("Betrag: ");
	scanf("%lf", &betrag);
	
	printf("Laufzeit: ");
	scanf("%d", &laufzeit);

	if(laufzeit >= 10 && betrag >= 500)
	{
		printf("Bundesschatzbrief\n");
	}
	else if(laufzeit >= 1 && betrag >= 5000)
	{
		printf("Bundesobligation\n");
	}		
	else if(laufzeit >= 1 && betrag >= 2000)
	{
		printf("Sparkassenbrief\n");
	}
	else if(betrag >= 5000)
	{
		printf("Festgeld\n");
	}
	else
	{
		printf("Sparbuch\n");
	}

	return 0;
}