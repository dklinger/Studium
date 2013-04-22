#include <stdio.h>
#include <ctype.h>

int Fakultaet(int n)
{
	double f = 1;
	int i;
	i = n;
	while(i>=1)
	{
		f = f * i;
		i--;
	}

	return f;
}

int quersumme(int n)
{
	int summe = 0;
	while(n%10 > 0)
	{
		summe += n%10;
		n = n/10;
	}

	return summe;
}

char my_toupper(char c)
{
	return toupper(c);
}

int main()
{
	printf("%d\n", Fakultaet(3));


	printf("%c\n", my_toupper('g'));

	return 0;
}