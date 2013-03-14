#include<stdio.h>

int main()
{
	int gZahl;
	double note;
	float zahl;
	
	//Eigentliche double-Konstante als float-Zahl abspeichern: suffic "f" verwenden>
	zahl = 123.45f;

	//Dezimal: gZahl = 13>>
	//Hexadezimal: gZahl = 0x13
	//Oktal: gZahl = 013;
	//Unsigned: gZahl = 13u oder gZahl = 13U

	printf("Willkommen bei C \n");

	printf("Gib deine Glueckszahl ein: ");

	scanf("%d", &gZahl);

	printf("Deine Glueckszahl ist %d\n", gZahl);

	

	printf("Welche Note willst du: ");

	scanf("%lf", &note);

	printf("Deine gewuenschte Note ist %lf\n", note);

	return 0;
}