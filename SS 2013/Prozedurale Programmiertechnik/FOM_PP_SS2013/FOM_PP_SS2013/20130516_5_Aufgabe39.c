#include <stdio.h>
#include <string.h>

//Funktion, die Gro� und Kleinbuchstaben z�hlt
void zaehleBuchstaben(char text[], int *gr, int *kl)
{
	//Zeichenkette durchlaufen
	int i;
	for(i = 0; i< strlen(text); i++)
	{
		//Zeichen abfragen: Gro�buchstabe
		if(text[i] >= 'A' && text[i] <= 'Z')
		{
			//Z�hler erh�hen
			(*gr)++;
		}
		//Zeichen abfragen: Kleinbuchstabe
		if(text[i] >= 'a' && text[i] <= 'z')
		{
			//Z�hler erh�hen
			(*kl)++;
		}
	}
}

int main()
{
	char str[256];
	int gr = 0, kl = 0;
	
	printf("Text: ");
	while(gets(str) != NULL)
	{
		zaehleBuchstaben(str, &gr, &kl);
	}

	//gets(str);
	printf("Gross: %d\nKlein: %d\n", gr, kl);

	return 0;
}