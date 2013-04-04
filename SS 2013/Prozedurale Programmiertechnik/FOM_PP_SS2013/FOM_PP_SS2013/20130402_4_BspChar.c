#include <stdio.h>
#include <string.h>

int main()
{
	char name[80];
	int i, zaehler=0;
	gets(name); //Liest ganze Array ein
	//scanf("%s", name); //Liest bei "Hallo Welt" nur "Hallo" ein, da scanf entweder bis "Return" or "Leertaste" einliest
	printf("%s\n", name); //gibt ganzes Array aus.
	
	printf("%c\n", name[0]);

	printf("Der text hat %d Zeichen\n", strlen(name));

	//Leerzeichen zählen
	for(i=0;i<strlen(name);i++)
	{
		if(name[i] == ' ')
		{
			zaehler++;
		}
	}
	printf("Es waren %d Leerzeichen\n", zaehler);

	//Aufgabe 32a: name rückwärts ausgeben
	for(i=strlen(name)-1;i>=0;i--)
	{
		printf("%c", name[i]); 
	}

	return 0;
}