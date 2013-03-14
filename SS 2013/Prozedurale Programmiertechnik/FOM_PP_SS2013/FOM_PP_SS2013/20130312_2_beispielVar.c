#include <stdio.h>
int main()
{
	// Deklaration von Variablen
	int zahl1,zahl2;
	double wert=1000.12;

	// Anweisungen
	//zahl1 = 10;
	//zahl2 = zahl1 + 1;

	// Einlesen von Konsole
	printf("Gib eine Zahl ein: ");
	scanf("%d",&zahl1);
	printf("Gib noch eine Zahl ein: ");
	scanf("%d",&zahl2);

	// Ausgabe von Variablen mit printf

	printf("Zahl 1: %10d\n",zahl1);

	printf ("Zahl 2: %d\n",zahl2);

	printf("Wert: %lf\n",wert);
	printf("Wert: %lg\n",wert);
	printf("Wert: %le\n",wert);

	return 0;
}