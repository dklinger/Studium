#include <stdio.h>
int main()
{
	int a,b,c;
	int hilf;

	a = 7;
	b = 5;
	c = 6;
	//printf("a: ");
	//scanf("%d",&a);

	// Rotation
	hilf = a;
	a = b;
	b = c;
	c = hilf;

	// Ausgabe
	printf("a: %d b: %d c: %d\n",a,b,c);



	return 0;
}