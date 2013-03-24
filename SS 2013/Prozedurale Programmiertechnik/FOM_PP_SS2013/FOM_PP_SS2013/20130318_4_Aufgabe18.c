#include <stdio.h>

int main()
{
	int stunde;

	printf("Stunde: ");
	scanf("%d", &stunde);

	if(stunde == 23 || stunde >= 0 && stunde <= 5)
	{
		printf("Gute Nacht\n");
	}
	else if(stunde >= 6 && stunde <= 10)
	{
		printf("Guten Morgen\n");
	}
	else if(stunde >= 11 && stunde <= 13)
	{
		printf("Mahlzeit\n");
	}
	else if(stunde >=14 && stunde <= 17)
	{
		printf("Schoenen Nachmittag\n");
	}
	else if(stunde >= 18 && stunde <= 22)
	{
		printf("Guten Abend\n");
	}
	else
	{
		printf("Falsche Stundenangabe\n");
	}

	return 0;
}