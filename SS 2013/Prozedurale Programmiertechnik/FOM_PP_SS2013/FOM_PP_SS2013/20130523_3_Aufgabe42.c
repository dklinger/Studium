#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct datum
{
	int tag, monat, jahr;
};

struct mitglied
{
	char name[16];
	double gewicht;
	struct datum wdatum;

};

struct mitglied Eingabe()
{
	struct mitglied hilf;

	printf("\nName: ");
	fflush(stdin);
	gets(hilf.name);
	
	printf("Gewicht: ");
	scanf("%lf", &hilf.gewicht);
	
	printf("Tag: ");
	scanf("%d", &hilf.wdatum.tag);
	
	printf("Monat: ");
	scanf("%d", &hilf.wdatum.monat);
	
	printf("Jahr: ");
	scanf("%d", &hilf.wdatum.jahr);

	return hilf;
}

void Ausgabe(struct mitglied mg)
{
	printf("\nName: %s\nGewicht: %.2lf\nDatum: %d.%d.%d\n", mg.name, mg.gewicht, mg.wdatum.tag, mg.wdatum.monat, mg.wdatum.jahr);
}

int main()
{
	int anz, i;
	double durchG=0;
	char name [20];
	//b)
	struct mitglied mliste[3] = {
		{"Hans", 80.3, 1,12,2012},
		{"Tom", 85.7,1,12,2012},
		{"Hans", 81.3,10,1,2013}
	}; //statisches Feld

	//c)
	//struct mitglied *mitgliedListe; //dyamisches Feld

	//printf("Wie viele Mitglieder ? ");
	//scanf("%d", &anz);

	//mitgliedListe = (struct mitglied *)malloc(anz * sizeof(struct mitglied));
	//
	//for(i=0;i<anz;i++)
	//{
	//	mitgliedListe[i] = Eingabe();
	//}
	//
	//for(i=0;i<anz;i++)
	//{
	//	Ausgabe(mitgliedListe[i]);
	//}

	//d): Name einlesen und Durchschnittsgewicht für diesen Teilnehmer bestimmen
	printf("Teilnehmer: ");
	fflush(stdin);
	gets(name);

	anz = 0;
	for(i=0;i<3;i++)
	{
		//TODO: Wichtig -> Stringvergleich mit strcmp
		//strcmp gibt 0 zurück, wenn die beiden Strings gleich sind
		if(strcmp(mliste[i].name,name) == 0)
		{
			durchG += mliste[i].gewicht;
			anz++;
		}
	}

	if(anz > 0)
	{
		durchG = durchG / anz;
	}

	printf("Durchschnittgewicht fuer %s ist %.2lf\n", name, durchG);

	//e): nicht klausurrelevant

	return 0;
}