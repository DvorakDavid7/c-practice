#include <stdio.h>


int main(int argc, char const *argv[])
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};;
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        sum += numbers[i];
    }

    printf("Pole obsahuje cisla: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d, ", numbers[i]);
    }
    printf("\n"); 

    printf("Prumer pole je: %g\n", (double)(sum / 7));
    return 0;
}
