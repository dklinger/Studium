#include <stdio.h>

int main()
{
	int a = 7, b = 5, c = 6, d;
		
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	printf("C = %d\n\n\n", c);

	d = a;

	a = b;
	b = c;
	c = d ;
	
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	printf("C = %d\n", c);



	return 0;
}