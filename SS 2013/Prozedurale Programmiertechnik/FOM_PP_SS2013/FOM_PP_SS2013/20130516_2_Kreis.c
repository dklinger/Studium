#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
//Funktion Berechne, die den Radius eines Kreises übergeben bekommt und die Fläche als Returnwert liefert

double Berechne(double radius, double *umfang)
{
	double flaeche;

	flaeche = M_PI* (radius * radius);

	*umfang = 2 * M_PI * radius;

	return flaeche;
}

int main()
{
	double radius, umfang = 0;

	printf("Radius: ");
	scanf("%lf", &radius);

	printf("Flaeche: %lf\n", Berechne(radius, &umfang));
	printf("Umfang: %lf\n", umfang);

	return 0;
}