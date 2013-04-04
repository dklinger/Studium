#include <stdio.h>

int main()
{
	int zahl, gesamt = 0;
	
	while(1) // Endlosschleife
	{
		printf("Zu addierende Zahl: ");
		scanf("%d", &zahl);

		if(zahl >0)
		{
			gesamt += zahl;
		}
		else
		{
			break;
		}
	}
	printf("Gesamt: %d\r\n", gesamt);

	return 0;
}