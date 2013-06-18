#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
	//TODO: Wichig - bei einer L‰nger von 80 kann man nur 79 Zeichen eingeben, da als letztes Zeichen immer die 0 stehen muss,
	//damit anderer Code weiﬂ wo der String zu Ende ist
	char text[80];
	char *eingabe;

	//Text einlesen
	gets(text);

	// eingabe dynamisch so groﬂ anlegen, dass genau der 
	// eingelesen Text gespeichert wird
	
	eingabe = (char *)malloc((strlen(text) + 1) * sizeof(char));
	//strlen+1, damit abschlieﬂende Null gespeichert werden kannN
	strcpy(eingabe, text);

	printf("Das ist der Text: %s\n", eingabe);

	return 0;
}