#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[80], strNeu[80], zeichen;
	int i, j=0;

	printf("String: ");

	printf("Char: ");
	scanf("%c", &zeichen);

	for(i=0;i<strlen(str);i++)
	{
		if(tolower(str[i]) != tolower(zeichen))
		{
			//printf("%c", str[i]);
			strNeu[j] = str[i];
			j++;
		}
	}

	strNeu[j] = 0; // 0 anhängen geht nicht mit strcat, da strcat den ersten Wert durchsucht bis eine 0 kommt und wir hier
	// bei diesem Beispiel keine 0 in strNeu haben(direkt nach dem Schleifendurchlauf)

	printf("%s\n", strNeu);

	return 0;
}