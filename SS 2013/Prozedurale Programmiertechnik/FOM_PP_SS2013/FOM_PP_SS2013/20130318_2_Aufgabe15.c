#include <stdio.h>

int main()
{
	//a)
	int a  = 0;

	if (a >=-20 && a <= 100)
	{
		// do some stuff here
	}

	//b)
	int x = 0;
	int y = 0;

	if(x < 0 && y > 5 && y <= 30)
	{
		//do some stuff here
	}

	//c)
	int z = 0, zModulo;
	
	if(z % 2 != 0 && z % 3 == 0 && z % 5 == 0)
	{
		//do some stuff here
	}

	//d)
	char antwort;

	if(antwort != 'j' && antwort != 'J')
	{
		//do some stuff here
	}

	int zaehler = 0;

	if(!(zaehler >= 5 && zaehler <=25))
	{

	}

	return 0;
}