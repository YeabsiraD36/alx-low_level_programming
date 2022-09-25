#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 */
int main(void)
{
    unsigned int i;

    srand(time(0));
    i = rand();
    printf("%i\n", i);
    return (0);
}
