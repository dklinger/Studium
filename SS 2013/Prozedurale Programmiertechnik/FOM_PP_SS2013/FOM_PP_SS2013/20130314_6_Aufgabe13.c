#include<stdio.h>

int main()
{
	double ko, z, t, endkapital, zinsen;
	const double days = 360;

	printf("Anfangskapital: ");
	scanf("%lf", &ko);
	
	printf("Jahreszins in Prozent: ");
	scanf("%lf", &z);
	
	printf("Wie viele Tage soll angelegt werden: ");
	scanf("%lf", &t);

	zinsen = (ko * z * t) / (100 * days);

	endkapital = ko + zinsen;
	
	printf("\nAnfangskapital: %10.2lf\n", ko);
	printf("Zinsen: %10.2lf\n", zinsen);
	printf("-----------------------------\n");
	printf("Endkapital: %10.2lf\n", endkapital);

	return 0;
}