#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char name[80], lowerName[80] = {0};
	char nachname[80] = "Klinger";
	int i;

	printf("Vorname: ");
	gets(name);
	//Nachname anhängen

	strcat(name, " ");
	strcat(name, nachname);
	printf("%s\n", name);

	//Name in Kleinbuchstaben umwandeln
	for(i=0; i<strlen(name);i++)
	{
		lowerName[i] = tolower(name[i]);
	}

	printf("%s\n", lowerName);

	if(strcmp("daniel klinger", lowerName) == 0)
	{
		printf("ole, ole\n");
	}
	else
	{
		printf("Zonk\n");
	}

	return 0;
}