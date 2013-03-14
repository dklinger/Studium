#include<stdio.h>

int main()
{
	double nettoBetrag, bruttoBetrag, mwst;
	double const mwstSatz = 0.19;

	printf("Geldbetrag: ");
	scanf("%lf", &nettoBetrag);
	
	printf("\n\n");

	mwst = nettoBetrag * mwstSatz;
	
	bruttoBetrag = nettoBetrag + mwst;
	
	printf("Betrag: %10.2lf\n", nettoBetrag);
	printf("+ MWST: %10.2lf\n", mwst);
	printf("------------------\n");
	printf("Gesamt: %10.2lf\n", bruttoBetrag);


	return 0;
}