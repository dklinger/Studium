#include <stdio.h>

int main()
{
	int s1, s2, s3, s4; //Anzahl Sorte1, Sorte2...

	for(s1=1; s1<=100; s1++)
	{
		for(s2=1; s2<=100; s2++)
		{
			for(s3=1; s3<=100; s3++)
			{
				for(s4=1; s4<=100; s4++)
				{
					if(s1+s2+s3+s4 == 100 && 
						s1*1 + s2*4 + s3*8 + s4*10 == 500 &&
						s1*4 + s2*9 + s3*12+s4*18 == 1000)
					{
						printf("s1: %d s2: %d s3: %d s4: %d\r\n", s1, s2, s3, s4);
					}
				}
			}
		}
	}

	return 0;
}