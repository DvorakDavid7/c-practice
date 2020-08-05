#include <stdio.h>


int main(int argc, char const *argv[])
{
    char c;
    
    printf("%s", "Zadejte znak: ");
    if (scanf("%c", &c) != 1) {
        printf("%s\n", "Invalid input");
        return 0;
    }

    if (97 < c && c < 122) {
        printf("male pismeno %c\n", c);
        return 0;
    }
    else if (65 < c && c < 90) {
        printf("velke pismeno %c\n", c);
        return 0;
    }
    else if (48 < c && c < 57) {
        printf("cislice %c\n", c);
        return 0;
    }

    switch (c) {
        case 33:
            printf("vykricnik\n");
            break;
        case 63:
            printf("otaznik\n");
            break;
        case 42:
            printf("hvezdicka\n");
            break;
        default:
            printf("jiny znak\n");
            break;
    }

    return 0;
}
