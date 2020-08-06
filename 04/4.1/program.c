#include <stdio.h>


int main() 
{
    int num;
    int res = 0;

    printf("Zadejte cislo: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input");
        return 0;
    }

    while (res <= (100 - num)) {            
        res += num;
        printf("%d, ", res); 
    }
    printf("\n"); 

    return 0;
}
