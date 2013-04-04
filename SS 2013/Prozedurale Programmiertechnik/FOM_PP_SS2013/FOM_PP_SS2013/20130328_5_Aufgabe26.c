#include <stdio.h>

int main()
{
	int x,n,t, fortschritt = 0, tage = 0;
		
	do
	{
		printf("Wie tief ist der Brunnen? ");
		scanf("%d", &x);

		printf("Wie hoch klettert er pro Tag? ");
		scanf("%d", &t);

		printf("Wie weit rutscht er pro Tag hinunter? ");
		scanf("%d", &n);

		if(n >= t)
		{
			printf("Falsche Eingabe\r\n");
		}
	}
	while(n >= t);

	while(fortschritt < x)
	{
		tage++;
		fortschritt += t;
		if(fortschritt >= x)
		{
			break;
		}
		fortschritt -= n;
	}

	printf("Er braucht %d Tage um aus dem Brunnen zu kommen.\r\n", tage);

	return 0;
}