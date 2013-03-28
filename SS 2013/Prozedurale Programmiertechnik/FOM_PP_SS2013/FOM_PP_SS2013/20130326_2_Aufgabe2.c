#include <stdio.h>

int main()
{
	int anzahl;
	int nichtDurchAchtTeilbar = 0;
	
	int runde = 0;
	int fritz = 0;
	int hans = 0;

	do
	{
		nichtDurchAchtTeilbar = 0;
		printf("Wie viele Aepfel haben Fritz und Hans gekauft: ");
		scanf("%d", &anzahl);
		if(anzahl % 8)
		{
			nichtDurchAchtTeilbar = 1;
			printf("Sorry, aber die Zahl muss durch 8 teilbar sein.\r\n\r\n");
		}
	}while(nichtDurchAchtTeilbar);
	
	printf("Runde | Fritz | Hans |  Rest |\r\n");
	printf("------------------------------\r\n");
	while (anzahl > 0)
	{
		runde++;
		anzahl -= 8;
		fritz += 5;
		hans += 3;

		printf("%3d      %3d     %3d    %3d   \r\n", runde, fritz, hans, anzahl);
	}



	return 0;
}