#include <stdio.h>
#include <ctype.h>
#include <string.h>

int Fakultaet(int n)
{
	double f = 1;
	int i;
	i = n;
	while(i>=1)
	{
		f = f * i;
		i--;
	}

	return f;
}

int quersumme(int n)
{
	int summe = 0;
	while(n%10 > 0)
	{
		summe += n%10;
		n = n/10;
	}

	return summe;
}

char my_toupper(char c)
{
	//return toupper(c);
	char gross;
	if(c >= 'a' && c <= 'z') // Abfrage, ob Kleinbuchstabe
	{
		gross = c - ('a'-'A'); // oder 32 abziehen
	}
	else
	{
		gross = c; // alle anderen Zeichen unver‰ndert lassen
	}

	return gross;
}

//e) Suche in Zahlenfeld
int Suche(int zahlen[], int anz, int szahl)
{
	int i, erg = 0;

	for(i=0;i<anz;i++)
	{
		if(zahlen[i] == szahl)
		{
			erg = 1;
		}
	}

	return erg;
}

//Pi in Funktion berechnen
// Aufgabe 27: Anzahl Br¸che ist Parameter, pi ist R¸ckgabewert
double Berechne_Pi(int anz)
{
	double pi;
	//pi ¸ber Reihe berechnen
	return pi;
}

//Funktion, die eine ganze Zahl ¸berpr¸ft
//liefert 1, wenn Zahl durch 7 teilbar oder 7 enth‰lt
//liefert 0 sonst
int Sieben(int zahl)
{
	int erg = 0;
	int zif;
	//Pr¸fung, ob durch 7 teilbar
	if(zahl%7 == 0)
	{
		erg = 1;
	}
	else
	{
		while(zahl > 0)
		{
			zif = zahl % 10; // Liefert letzte Stelle von Zahl
			if(zif == 7)
			{
				erg = 1;
				break; // Abbruch Schleife
			}
			
			zahl = zahl / 10; // Liefert alles auﬂer die letzte Stelle von Zahl
		}
	}
}

int main()
{
	char text[80];
	int i, zahl;
	int zahlen[10] = {2,5,10,44,3,6,8,9,21,34};

	printf("%d\n", Fakultaet(3));


	printf("%c\n", my_toupper('g'));

	gets(text);
	//Text durchlaufen und jeden Kleichbuchstaben in Groﬂbuchstaben umwandeln
	for(i=0; i<strlen(text); i++)
	{
		printf("%c", my_toupper(text[i]));
	}

	printf("Welche Zahl suchen: ");
	scanf("%d", &zahl);

	if(Suche(zahlen, 10, zahl) == 1)
	{
		printf("Kommt vor\n");
	}
	else
	{
		printf("Kommt nicht vor\n");
	}

	//‹berpr¸fung , ob zahl 7 enth‰lt
	if(Sieben(zahl) == 0)
	{
		printf("Keine 7\n");
	}
	else
	{
		printf("7\n");
	}

	return 0;
}