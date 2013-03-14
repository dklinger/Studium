#include <stdio.h>

int main()
{

	double pi;

	//Durch den Punkt bei der letzten 2 wird die komplette Anweisung als double berechnet. Ohne ist es eine Int-Division und somit
	//kommt am Schluss 3.0 raus, da bei jeder dieser Divisionen der Ganzzahl-Wert 0 ist
	pi = 3 + (1/(7 + (1/(15 + (1/(1/(1 + (1/(292 + (1/2.))))))))));

	printf("Pi: %lf\n", pi);

	return 0;
}