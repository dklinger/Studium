#include <stdio.h>

#define ANZ 10
int main()
{
	double zahlen[ANZ];
	double zahlen2[ANZ];
	int i, grenze, i2;

	//ANZ zahlen einlesen
	for(i=0;i<ANZ;i++)
	{
		printf("Zahl: ");
		scanf("%lf", &zahlen[i]);
	}

	//Lesen Sie eine Grenze ein und geben Sie alle Zahlen im Array aus, die untrhalb einer Grenze liegen
	printf("Bis wohin ausgeben: ");
	scanf("%d", &grenze);

	for(i=0;i<ANZ;i++)
	{
		if(zahlen[i] < grenze)
		{
			printf("Zahl: %2.0lf\n", zahlen[i]);
		}
	}

	//Speichern Sie die Zahlen in einem zweiten Array und geben Sie dann die Zahlen im zweiten Array aus
	i2=0;
	for(i=0;i<ANZ;i++)
	{
		if(zahlen[i] < grenze)
		{
			zahlen2[i2] = zahlen[i];
			i2++;
			printf("Zahl im ersten Array: %2.0lf\n", zahlen[i]);
		}
	}

	for(i=0;i<i2;i++)
	{
		printf("Zahl im zweiten Array: %2.0lf\n", zahlen2[i]);
	}

	return 0;
}