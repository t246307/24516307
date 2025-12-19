#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int intelligence, stamina, charisma;
    int remain;

    srand((unsigned int)time(NULL));

    intelligence = rand() % 21;

    remain = 20 - intelligence;
    stamina = rand() % (remain + 1);

    charisma = remain - stamina;

    const char *job;
    if (intelligence >= stamina && intelligence >= charisma) {
        job = "mage";
    } else if (stamina >= intelligence && stamina >= charisma) {
        job = "knight";
    } else {
        job = "thief";
    }

    printf("job: %s\n", job);
    printf("intelligence: %d\n", intelligence);
    printf("stamina: %d\n", stamina);
    printf("charisma: %d\n", charisma);

    return 0;
}
