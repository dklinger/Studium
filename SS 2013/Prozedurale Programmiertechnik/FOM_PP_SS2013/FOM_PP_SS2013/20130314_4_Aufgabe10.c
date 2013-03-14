#include<stdio.h>

int main()
{
	double nettoBetrag, bruttoBetrag, mwst;
	double mwstSatz = 0.19;

	printf("Geldbetrag: ");
	scanf("%lg", &nettoBetrag);
	
	printf("\n\n");

	mwst = nettoBetrag * mwstSatz;
	
	bruttoBetrag = nettoBetrag + mwst;
	
	printf("Betrag:    %lg\n", nettoBetrag);
	printf("+ MWST:    %lg\n", mwst);
	printf("------------------\n");
	printf("Gesamt:    %lg\n", bruttoBetrag);


	return 0;
}