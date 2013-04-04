#include <stdio.h>

int main()
{
	int feld[5]; // 5 Speicherplätze vom Datentyp int
	int feld2[5];
	//feld[0] = 20;
	//feld[1] = 15;

	int i, sum, zahl, zaehler, max, min, hilf;

	for(i = 0; i <= 4; i++)
	{
		printf("Gib eine Zahl ein: ");
		scanf("%d", &feld[i]);
	}

	//Ausgabe
	printf("Die Zahlen waren: ");
	sum = 0;
	for(i = 0; i<=4; i++)
	{
		printf("%d\r\n", feld[i]);
		sum += feld[i];
	}
	
	printf("Summe der Zahlen: %d\n", sum);

	//Zahlen im Feld Rückwärts
	printf("Die Zahlen waren rueckwaerts: ");
	sum = 0;
	for(i = 4; i>=0; i--)
	{
		printf("%d\r\n", feld[i]);
		sum += feld[i];
	}
	
	//Zahlen in ein zweites Feld speichern
	for(i=0;i<=4;i++)
	{
		feld2[i] = feld[i];
	}


	//Suche einer Zahl im Feld
	printf("Gib eine Zahl ein: ");
	scanf("%d", &zahl);
	zaehler = 0;
	for(i=0;i<=4;i++)
	{
		if(feld[i] == zahl)
		{
			printf("kommt vor\n");
			zaehler = 1;
			break;
		}
	}

	if(zaehler == 0)
	{
		printf("Zahl kommt nicht vor\n");
	}
	
	max = min = feld[0];
	for(i=0;i<=4;i++)
	{
		if(max < feld [i])
		{
			max = feld[i];
		}
		
		if(min > feld [i])
		{
			min = feld[i];
		}
	}
	printf("Die groesste Zahl ist %d\n", max);
	printf("Die kleinste Zahl ist %d\n", min);

	//Zahlen im Feld umdrehen
	for(i=0;i<=4/2;i++)
	{
		hilf = feld[i];
		feld[i] = feld[4-i];
		feld[4-1] = hilf;
	}

	return 0;
}