#include <stdio.h>

int main()
{
	int zahl;
	int z1, z2;

	for (zahl = 10; zahl <= 99; zahl++)
	{
		z1 = zahl % 10;
		z2 = zahl / 10;

		if (zahl == z1+z2 + z1*z2)
		{
			printf("%d\n", zahl);
		}		
	}

	return 0;
}