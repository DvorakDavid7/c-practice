#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a;
    int b;

    printf("%s", "Zadejte stranu a: ");
    int n1 = scanf("%d", &a);
    if (n1 != 1) {
        printf("%s\n", "Invalid input");
        return 0;
    }

    printf("%s", "Zadejte stranu b: ");
    int n2 = scanf("%d", &b);
    if (n2 != 1) {
        printf("%s\n", "Invalid input");
        return 0;
    }

    printf("Obsah obdelniku je: %d\n", a * b);
    return 0;
}
