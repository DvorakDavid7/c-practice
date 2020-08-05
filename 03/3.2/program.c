#include <stdio.h>


int main(int argc, char const *argv[])
{
    int first, second, third;
    int max;

    printf("zadejte prvni cislo: ");
    if (scanf("%d", &first) != 1) {
        printf("Invalid input\n");
        return 0;
    };
    printf("Zadejte druhe cislo: ");
    if (scanf("%d", &second) != 1) {
        printf("Invalid input\n");
        return 0;
    };
    printf("Zadejte treti cislo: ");
    if (scanf("%d", &third) != 1) {
        printf("Invalid input\n");
        return 0;
    };

    if (first > second && first > third) {
        max = first;
    }
    else if (second > first && second > third) {
        max = second;
    }
    else {
        max = third;
    }
    printf("Nejvetsi cislo je %d\n", max);

    return 0;
}
