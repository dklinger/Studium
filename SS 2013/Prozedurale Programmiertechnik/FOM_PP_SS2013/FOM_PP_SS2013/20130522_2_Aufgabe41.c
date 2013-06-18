#include <stdio.h>
#include <malloc.h>

struct Beschaeftigter
{
	char name[40];
	double gehalt;
};//TODO: WICHTIG!! -> Strichpunkt!!!

struct Beschaeftigter Einlesen()
{
	struct Beschaeftigter mitarbeiter;

	printf("\nName: ");
	fflush(stdin);
	gets(mitarbeiter.name);

	printf("Gehalt: ");
	scanf("%lf", &mitarbeiter.gehalt);

	return mitarbeiter;
}

//Funktion DUrchschnittsverdienst
double DurchV(struct Beschaeftigter feld[], int anz)
{
	int i;
	double durch = 0;
	for(i=0;i<anz;i++)
	{
		durch += feld[i].gehalt;
	}

	if(anz > 0)
	{
		durch = durch/anz; // Division durch 0 verhindern
	}

	return durch;
}

int main()
{
	struct Beschaeftigter *feld;
	int anz, i, iHoechstverdiener;
	double durchschVerdienst = 0, maxVerdienst;

	printf("Wie viele Beschaeftigten? ");
	scanf("%d", &anz);

	feld = (struct Beschaeftigter *)malloc(anz * sizeof(struct Beschaeftigter));

	for(i=0;i<anz;i++)
	{
		feld[i] = Einlesen();
	}

	durchschVerdienst = DurchV(feld, anz);

	printf("Der Durchschnittsverdienst der Beschaeftigten ist %.2lf\n", durchschVerdienst); 

	//Beschäftigten mit dem höchsten Verdienst ausgeben

	//Durchschnittsverdienst der Beschäftigten	
	iHoechstverdiener = 0;
	for(i=0;i<anz;i++)
	{
		if(feld[i].gehalt > feld[iHoechstverdiener].gehalt)
		{
			iHoechstverdiener = i;
		}
	}

	printf("Der Hoechstverdiener ist %s\n", feld[iHoechstverdiener].name); 


	return 0;
}