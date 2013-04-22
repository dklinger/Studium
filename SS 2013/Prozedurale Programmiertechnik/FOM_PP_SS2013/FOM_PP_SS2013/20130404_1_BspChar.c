#include <stdio.h>
#include <string.h> //für strlen
#include <ctype.h> // für tolower

int main()
{
	char str[80], lowerChar;
	int i, vokalCount = 0;

	printf("Wort: ");
	gets(str);

	for(i=0;i<strlen(str);i++)
	{
		switch(tolower(str[i]))
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vokalCount++;
				break;
			default:
				break;
		}
	}
	
	printf("Vokale: %d\r\n", vokalCount);

	return 0;
}