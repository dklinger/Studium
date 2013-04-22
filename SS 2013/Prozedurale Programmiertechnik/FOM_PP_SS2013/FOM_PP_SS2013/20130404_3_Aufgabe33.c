#include <stdio.h>
#include <string.h>

int main()
{
	char text[80];
	int zeilen, zeichen, woerter, i;
	zeilen = zeichen = 0;
	woerter = 0;

	printf("Bitte Text eingeben: \n");
	while(gets(text) != NULL)
	{
		zeilen++;
		zeichen = zeichen + strlen(text);
	
		// to do: Leerzeichen zählen
		for(i=0;i<strlen(text);i++)
		{
			if(i == 0)
			{
				woerter++;
			}

			if(text[i] == ' ')
			{
				woerter++;
			}
		}
	}

	printf("Es waren: %d Zeilen, %d Zeichen, %d Woerter \n", zeilen, zeichen, woerter);


	return 0;
}