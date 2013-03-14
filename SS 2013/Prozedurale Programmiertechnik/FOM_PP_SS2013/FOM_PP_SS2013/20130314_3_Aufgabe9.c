#include<stdio.h>

int main()
{
	/*
	int zahl1, zahl2, erg;
	
	printf ("Zahl 1: ");
	scanf("%d", &zahl1);
	
	printf ("Zahl 2: ");
	scanf("%d", &zahl2);
	
	erg = zahl1 * zahl2;
	printf("Ergebnix Mult: %d\n", erg);
	
	erg =zahl1 / zahl2;
	printf("Ergebnix Div: %d\n", erg);
	
	erg =zahl1 % zahl2;
	printf("Ergebnix Modulo: %d\n", erg);
	*/


	
	double zahl1, zahl2, erg;
	
	printf ("Zahl 1: ");
	scanf("%lf", &zahl1);
	
	printf ("Zahl 2: ");
	scanf("%lf", &zahl2);
	
	erg = zahl1 * zahl2;
	printf("Ergebnix Mult: %lf\n", erg);

	erg =zahl1 / zahl2;
	printf("Ergebnix Div: %lf\n", erg);

	
	return 0;
}