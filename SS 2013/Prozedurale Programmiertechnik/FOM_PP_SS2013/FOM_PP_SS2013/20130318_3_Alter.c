#include <stdio.h>

int main()
{
	int alter;

	printf("Wie alt: ");
	scanf("%d", &alter);

		if (alter < 14)
		{
			printf("Zu Hause bleiben\n");
		}
		else if ( alter >= 14 && alter < 16)
		{
			printf("Um 10 Uhr zu Hause\n");
		}
		else if(alter >= 16 && alter < 18)
		{
			printf("Um 12 Uhr zu Hause\n");
		}
		else if(alter >= 18)
		{
			printf("Egal\n");
		}

		return 0;
}