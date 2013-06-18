#include <stdio.h>
#include <string.h>

//Strukturdeklaration
struct buch
{
	char titel[80];
	char autor[80];
	int seitenzahl;
	int jahr;
};

//Funtion zur Ausgabe
void Ausgabe(struct buch dasBuch)
{
	printf("Titel: %s Autor: %s Seitenzahl: %d Ersch.jahr: %d\n", dasBuch.titel, dasBuch.autor, dasBuch.seitenzahl, 
		dasBuch.jahr);
}

//Funktion zur Eingabe
struct buch Eingabe()
{
	struct buch hilf;
	
	printf("Titel: ");
	fflush(stdin);
	gets(hilf.titel);

	printf("Autor: ");
	fflush(stdin);
	gets(hilf.autor);

	printf("Seitenzahl: ");
	scanf("%d", &hilf.seitenzahl);

	printf("Ersch.jahr: ");
	scanf("%d", &hilf.jahr);

	return hilf;
}

int main()
{
	//struct buch meinBuch = Eingabe();//{"Grundkurs C", "Wolf", 150, 2010};
	//Ausgabe(meinBuch);
	//
	////Ändere Titel in Grundkurs C++
	//strcpy(meinBuch.titel, "Grundkurs C++");
	//gets(meinBuch.titel);
	//Ausgabe(meinBuch);

	struct buch bibliothek[2];
	int i, n =2, gesamtseiten = 0;
	double durchseiten = 0;

	for(i=0;i<n;i++)
	{
		bibliothek[i] = Eingabe();
		Ausgabe(bibliothek[i]);
	}

	//Durschnittliche Seitenzahl der Bücher in der Bibliothek berechnen
	for(i=0;i<n;i++)
	{
		gesamtseiten += bibliothek[i].seitenzahl;
	}

	//TODO: Wichtig -> Wenn man eine der int-Variablen, egal welche, auf double castet, wird auch das Gesamtergebnis double
	//-> Man könnte auch direkt die Variable gesamtseiten auf double setzen
	durchseiten = (double)gesamtseiten / n;
	
	printf("Durchschnittliche Seitenzahl: %.1lf\n", durchseiten);

	return 0;
}