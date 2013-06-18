#include <stdio.h>

void feldbearbeitung(double feld[], int anzahl, double *sum)
{
	double summe = 0, max = feld[0], maxsum;
	int i;

	*sum = 0;
	for(i=0;i<anzahl;i++)
	{
		*sum += feld[i];
	}

	//printf("Summe: %lf\n", summe);

	//Maximum bestimmen und ausgeben

	for(i=1;i<anzahl;i++)
	{
		if(feld[i] > max)
		{
			max = feld[i];
		}
	}

	printf("Groesste Zahl: %lf\n", max);

	//größte Summe zweier aufeinanderfolgender Elemente
	maxsum = feld[0] + feld[1];
	for(i = 0; i<anzahl-1; i++)
	{
		if(feld[i] + feld[i+1] > maxsum)
		{
			maxsum = feld[i] + feld[i+1];
		}
	}

	printf("Maximale Summe: %lf\n", maxsum);
}

//feldbearbeitung so abändern, dass Summe zurückgeliefert wird
double feldbearbeitung2(double feld[], int anzahl)
{
	double summe = 0;
	int i;

	for(i=0;i<anzahl;i++)
	{
		summe += feld[i];
	}

	return summe;
}

int main()
{
	double werte[10] = {1.1,4.5,4.6,1.1,1.1,1.1,9.2,5.6,6.8,3.6};
	double wsum;

	feldbearbeitung(werte, 10, &wsum);

	//wsum = feldbearbeitung2(werte, 10);
	printf("Summe: %lf\n", wsum);

	return 0;
}