#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * keygen - a function that generates a random valid password
 */
void keygen(int N)
{
	int i = 0;
	int randomizer = 0;
	srand((unsigned int) (time(NULL)));

	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char symbols[] = "@#$^&*?";

	char password[N];

	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer[i] = 3)
		{
			password[i] = letters[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letters[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
