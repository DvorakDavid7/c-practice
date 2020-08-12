#include <stdio.h>


double suma_pole(double pole[], int pocet)
{
    double sum = 0;
    for (int i = 0; i < pocet; i++)
    {
        sum += pole[i];
    }
    return sum;   
}


int main(int argc, char const *argv[])
{
    double arr[] = {1,2,3,4,5};
    int pocet = 5;

    printf("Pole obsahuje cisla: ");
    for (int i = 0; i < pocet; i++)
    {
        printf("%g, ", arr[i]);
    }
    printf("\n");

    double sum = suma_pole(arr, 5);

    printf("Suma pole je: %g\n", sum);
    return 0;
}
