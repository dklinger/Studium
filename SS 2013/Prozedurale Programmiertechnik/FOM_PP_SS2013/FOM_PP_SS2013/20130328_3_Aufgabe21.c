#include <stdio.h>
#include <math.h>

int main()
{
	double x, sx;

	//< 1.6 gibt 1.6 nicht mit aus, daher verwenden wir hier 1.61
	//Achtung bei Gleichheitsabfragen im Datentyp double oder float
	for(x=0; x <= 1.61; x = x + 0.1)
	{
		sx = sin(x);
		printf("x=%lf sin(x) = %lf\n",x,sx);
	}

	return 0;
}