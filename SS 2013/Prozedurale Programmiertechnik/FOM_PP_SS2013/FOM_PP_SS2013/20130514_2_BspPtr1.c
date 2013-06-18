#include <stdio.h>

void f1(int *z)
{
	(*z)++;
}

int main()
{
	int *iptr;

	int z1 = 6, z2 = 10;

	//Adresse von z2 in iptr speichern
	iptr = &z2;
	//Inhalt von z2 üer iptr ausgeben
	printf("%d\n", *iptr);

	//Inhalt von z2 über iptr um 1 erhöhren
	*iptr = *iptr + 1; // oder (*iptr)++
	printf("%d\n", z2);

	f1(&z1);
	printf("%d\n", z1);

	return 0;
}