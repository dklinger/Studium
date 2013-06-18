#include <stdio.h>

//Funktion Suche Zeichen in Zechenkette 
//iefert Adresse des Zeichens
//liefert NULL, wenn Zeichen nicht gefunden
char *Suche(char text[], char zeich)
{
	char *zgr;
	for(zgr = text; *zgr != 0; zgr++)
	{
		if(*zgr == zeich)
		{
			return zgr;
		}
	}

	return NULL; //nicht gefunden
}

int main()
{


	return 0;
}