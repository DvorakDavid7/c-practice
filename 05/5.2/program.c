/**
 * Sieve of Eratosthenes algorithm
 */
#include <stdio.h>

int const SIZE = 100 - 2;

int main(int argc, char const *argv[])
{
    int numbers[SIZE];

    /* inicializace */
    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = i + 2;
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] != 0)
        {
            /* is prime number */
            printf("%d, ", numbers[i]);
            
            /* set multiples to zero*/
            int step = numbers[i];
            for (int j = i; j < SIZE; j += step)
            {
                numbers[j] = 0;
            }
        }
    }
    
    printf("\n");
    return 0;
}
