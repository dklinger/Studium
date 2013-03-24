#include <stdio.h>

int main()
{
	char wahl;

	printf("Sprache: ");
	scanf("%c", &wahl);

	if(wahl == 'g' || wahl == 'G')
	{
		printf("Auf Wiedersehen\n");
	}
	else if(wahl == 'f' || wahl == 'F')
	{
		printf("au revoir\n");
	}
	else if(wahl == 'i' || wahl == 'i')
	{
		printf("ciao\n");
	}
	else
	{
		printf("good bye\n");
	}

	switch(wahl)
	{
	case 'G':
	case 'g':
		printf("Auf Wiedersehen\n");
		break;
		
	case 'I':
	case 'i':
		printf("ciao\n");
		break;
		
	case 'F':
	case 'f':
		printf("au revoir\n");
		break;
	default:
		printf("good bye\n");
		break;
	}


	return 0;
}