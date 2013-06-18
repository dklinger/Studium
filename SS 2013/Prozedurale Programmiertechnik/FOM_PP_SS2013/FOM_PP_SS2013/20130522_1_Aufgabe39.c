#include <stdio.h>
#include <malloc.h>

int quersumme(int zahl)
{
	int qSumme = 0;

	while(zahl > 0)
	{
		qSumme += zahl % 10;
		zahl = zahl / 10;
	}

	return qSumme;
}

int main()
{
	int zahl;
	int anz, i, maxQuers, maxQuersIndex;
	int *feld;
	//anz einlesen
	printf("Wie viele Zahlen: ");
	scanf("%d", &anz);
	
	//Speicherplatz belegen
	feld = (int *)malloc(anz * sizeof(int));
	printf("Geben Sie die Zahlen ein: \n");
	for(i=0;i<anz;i++)
	{
		scanf("%d", &feld[i]);
	}
	
	maxQuersIndex = 0;
	maxQuers = quersumme(feld[0]);
	for(i=0;i<anz;i++)
	{
		if(quersumme(feld[i]) > maxQuers)
		{
			maxQuers = quersumme(feld[i]);
			maxQuersIndex = i;
		}
	}
	
	printf("maximale Quersumme von %d fuer Zahl %d bei Index %d\n", maxQuers, feld[maxQuersIndex], maxQuersIndex);

	//printf("Zahl eingeben: ");
	//scanf("%d", &zahl);

	//printf("quersumme: %d\n", quersumme(zahl));

	return 0;
}