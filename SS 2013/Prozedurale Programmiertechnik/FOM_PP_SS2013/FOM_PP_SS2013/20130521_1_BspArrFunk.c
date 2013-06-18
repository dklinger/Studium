#include <stdio.h>
#include <malloc.h> //für dynamische Speicerplatzreservierung

int Suche(int zahlen[], int n, int zahl)
{
	int i, anzahl = 0;
	for(i = 0; i < n; i++)
	{
		if(zahlen[i] == zahl)
		{
			anzahl++;
		}
	}

	return anzahl;
}


void SucheMitPointer(int zahlen[], int n, int zahl, int *anzahl)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(zahlen[i] == zahl)
		{
			(*anzahl)++;
		}
	}
}

void Verdopple(int zArr[], int anz)
{
	int i;
	for(i = 0; i < anz; i++)
	{
		zArr[i] = zArr[i] * 2;
	}
}

int main()
{
	//int zahlen[10] = {3,60,3,7,8,9,12,45,5,9};
	//TODO: Wichtig -> dynamisches anlegen eines int-Arrays
	int *zahlen;
	int zahl = 0, anzahl = 0, i, n = 10;

	//Array zahlen anlegen
	//malloc = besorg mir speicher für n Mal die Größe von int
	zahlen = (int *)malloc(n*sizeof(int));
	//sizeof liefert größe in Byte
	//eigentlich müsste zahlen noch auf null abgefragt werden

	//TODO: Wichtig!
	//Zahlen-Array von Tastatur einlesen
	for(i = 0; i<n; i++)
	{
		scanf("%d", &zahlen[i]);
	}

	printf("Zahl: \n");
	scanf("%d", &zahl);

	printf("Anzahl des Vorkommens: %d\n", Suche(zahlen, n, zahl));
	
	SucheMitPointer(zahlen, n, zahl, &anzahl);
	printf("Anzahl des Vorkommens mit Pointer: %d\n", anzahl);
	
	//Verdoppeln
	printf("Vor verdoppeln: ");
	for(i = 0; i < n; i++)
	{
		printf("%d, ", zahlen[i]);
	}

	Verdopple(zahlen, n);

	printf("\nNach verdoppeln: ");
	for(i = 0; i < n; i++)
	{
		printf("%d, ", zahlen[i]);
	}
	printf("\n");

	free(zahlen); //TODO: Wichtig - Speicherplatz zurückgeben

	return 0;
}