#include <stdio.h>

int main()
{

	//Programmablaufplan siehe zip-Datei
	int jahr;

	printf("Jahreszahl: ");
	scanf("%d", &jahr);

	if(jahr % 4 == 0)
	{
		if(jahr % 400 == 0)
		{
			printf("Schaltjahr\n");
		}
		else
		{
			if(jahr % 100 == 0)
			{
				printf("Kein Schaltjahr\n");
			}
			else
			{
				printf("Schaltjahr\n");
			}
		}
	}
	else
	{
		printf("Kein Schaltjahr\n");
	}

	if((jahr%4==0&&jahr%100!=0) || jahr%100==0)
	{
		printf("Schaltjahr\n");
	}
	else
	{		
		printf("Kein Schaltjahr\n");
	}

	return 0;
}