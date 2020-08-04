#include <stdio.h>


int main(int argc, char const *argv[])
{
    double num;

    printf("%s", "Zadejte cislo: ");
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Cela cast cisla %g je %d\n", num, (int)num);
    return 0;
}
