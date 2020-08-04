#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("%s", "Zadejte stranu a: ");
    scanf("%d", &a);
    printf("%s", "Zadejte stranu b: ");
    scanf("%d", &b);
    printf("%s", "Zadejte stranu c: ");
    scanf("%d", &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("%s\n", "Trojuhelnik lze sestrojit.");
    }
    else {
        printf("%s\n", "Trojuhelnik nelze sestrojit.");
    }
    
    return 0;
}
