#include <stdio.h>

int main()
{
	int wieOft;
	double pi = 0;
	double nenner = 1;
	int x;

	printf("Wie viele stellen: ");
	scanf("%d", &wieOft);

	for(x = 1; x <= wieOft; x++)
	{
		if(x % 2 == 0)
		{
			pi = pi - (1/nenner);
		}
		else
		{
			pi = pi + (1/nenner);
		}

		nenner += 2;
	}

	pi = pi * 4;

	printf("Pi = %lf\r\n", pi);

	

	return 0;
}