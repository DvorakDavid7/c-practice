#include <stdio.h>


int main(int argc, char const *argv[])
{
    float num;
    float accuracy;

    printf("Zdejte cislo: ");
    scanf("%f", &num);

    printf("Zdejte presnost: ");
    scanf("%f", &accuracy);

    printf("Cislo po zaokrouhleni je: %g\n", 
        (int)(num / accuracy + 0.5) * accuracy);

    return 0;
}
