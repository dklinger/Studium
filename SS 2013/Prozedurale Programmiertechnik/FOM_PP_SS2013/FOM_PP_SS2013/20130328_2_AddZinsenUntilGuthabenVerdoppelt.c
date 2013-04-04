#include <stdio.h>

int main()
{
	double anfangsGuthaben, zinsSatz, guthaben;
	int durchlauf = 0;

	printf("Anfangsguthaben: ");
	scanf("%lf", &anfangsGuthaben);
	
	printf("Zinssatz in Prozent: ");
	scanf("%lf", &zinsSatz);

	guthaben = anfangsGuthaben;

	printf("\r\nJahr   |    Guthaben   |\r\n");
	printf("    0  |     %8.2lf  |\r\n", anfangsGuthaben);

	while(guthaben < (anfangsGuthaben * 2))
	{		
		durchlauf++;
		guthaben = guthaben + guthaben * (zinsSatz / 100);

		printf("   %2d  |     %8.2lf  |\r\n", durchlauf, guthaben);
	}

	return 0;
}