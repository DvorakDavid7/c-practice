#include <stdio.h>


int main(int argc, char const *argv[])
{
    int const array[5] = {1, 2, 3, 4, 5};

    printf("Puvoni hodnoty: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", array[i]);
    }

    printf("\n");

    printf("Nove hodnoty: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d, ", array[i]);
    }

    printf("\n");
    return 0;
}
