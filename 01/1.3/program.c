#include <stdio.h>


int main(int argc, char const *argv[]) {

    int num;

    printf("%s", "Zadejte cislo: ");
    int n = scanf("%d", &num);
    if (n != 1) {
        printf("%s\n", "Invalid input");
        return 0;
    }

    printf("Cislo %d odpovida cislu %o v osmickove soustave a cislu %X v sestnactkove soustave.\n", num, num, num);

    return 0;
}
