#include <stdio.h>

int main()
{
	int zeilen,spalten, i, j;

	printf("Zeilen: ");
	scanf("%d", &zeilen);

	printf("Spalten: ");
	scanf("%d", &spalten);

	for(i = 0; i < zeilen; i++)
	{
		for(j=0;j<spalten; j++)
		{
			printf("*");
		}
		printf("\r\n");
	}

	return 0;
}