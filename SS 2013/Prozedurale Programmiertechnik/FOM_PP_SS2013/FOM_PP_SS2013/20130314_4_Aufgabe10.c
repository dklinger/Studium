#include<stdio.h>

int main()
{
	double nettoBetrag, bruttoBetrag, mwst;
	
	printf("Geldbetrag: ");
	scanf("%lg", &nettoBetrag);
	
	printf("\n\n");

	mwst = nettoBetrag * 0.19;
	
	bruttoBetrag = nettoBetrag + mwst;
	
	printf("Betrag:    %lg\n", nettoBetrag);
	printf("+ MWST:    %lg\n", mwst);
	printf("------------------\n");
	printf("Gesamt:    %lg\n", bruttoBetrag);


	return 0;
}