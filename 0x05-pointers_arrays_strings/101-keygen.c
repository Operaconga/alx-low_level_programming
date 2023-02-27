#include "main.h"
#include <stdio.h>
#include <time.h>

void randomPasswordGeneration(int N)
{
    int i = 0;

    int randomizer = 0;

    srand((unsigned int)(time(NULL)));

    char numbers[] = "0123456789";

    char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char symbols[] = "!@#$^&*?";

    char password[N];

    randomizer = rand() % 4;

    for (i = 0; i < N; i++) {
        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
}

int main()
{
    int N = 10;

    randomPasswordGeneration(N);

    return 0;
}
