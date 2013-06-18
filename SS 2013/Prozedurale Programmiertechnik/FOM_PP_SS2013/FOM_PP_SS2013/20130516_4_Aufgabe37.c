#include <stdio.h>
#include <math.h>

int quot_rem(double x, double y, int *quotient, double *rest)
{
	if(y == 0)
	{
		return 0;
	}
		
	*rest = fmod(x, y);
	*quotient = (x-*rest)/y;

	return 1;
}

int main()
{
	double r = 0, x, y;
	int q = 0;

	printf("x: ");
	scanf("%lf", &x);
	
	printf("y: ");
	scanf("%lf", &y);

	if(quot_rem(x, y, &q, &r) == 1)
	{
		printf("q: %d - r: %lf\n", q, r);
	}

	return 0;
}