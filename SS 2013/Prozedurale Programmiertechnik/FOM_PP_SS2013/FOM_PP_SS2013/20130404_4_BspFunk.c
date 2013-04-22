#include <stdio.h>

void Ausgabe()
{
	printf("Guten Abend\n");
	printf("-----------\n");
	printf("\n\n");

	return;
}

void Ausgabe_2_0(char z, int n)
{
	int i;
	printf("Guten Abend\n");
	for(i=1;i<=n;i++)
		printf("%c", z);
	printf("\n\n\n");

	return;
}

void Ausgabe_2_1(char z, int n, char text[]); //Forward declatation bzw. Funktionsprototyp

//Funktion, die ganze Zahlen einliest bis 0 eingegeben wird und Summe der Zahlen berechnet zurückliefert
int Summe()
{
	int sum = 0;
	int zahl;

	do
	{
		printf("Zahl: ");
		scanf("%d", &zahl);
		sum = sum + zahl;

	}while(zahl != 0);


	return sum;
}


int main()
{
	int s;
	Ausgabe(); //Funktionsaufruf
	Ausgabe_2_0('*', 11);
	Ausgabe_2_1('*', 11, "whatever");

	s = Summe();

	printf("Summe ist: %d\n", s);

	return 0;
}

void Ausgabe_2_1(char z, int n, char text[])
{
	int i;
	printf("Guten %s\n", text);
	for(i=1;i<=n;i++)
		printf("%c", z);
	printf("\n\n\n");

	return;
}