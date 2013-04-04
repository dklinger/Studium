#include <stdio.h>

int main()
{
	int reste[100];

	int zahl, zielSystem, i, i2;

	printf("Zahl: ");
	scanf("%d", &zahl);

	printf("Zielsystem: ");
	scanf("%d", &zielSystem);

	i = 0;
	while(zahl > 0)
	{
		reste[i] = zahl % zielSystem;
		i++;
		zahl = zahl / zielSystem;
	}

	printf("binaer: ");
	for(i2=i-1;i2>=0;i2--)
	{
		printf("%d", reste[i2]);
	}
	printf("\n");

	return 0;
}