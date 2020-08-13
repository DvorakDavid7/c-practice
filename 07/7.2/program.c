#include <stdio.h>


typedef struct zlomek
{
    int citatel;
    int jmenovatel;

} Zlomek;


int nejvetsi_spolecny_delitel(int x, int y)
{
    int d;
    if (x < y)
        d = x;
    else 
        d = y;
    while (1)
    {
        if (x % d == 0 && y % d == 0)
            return d;
        d--;
    }
}


Zlomek secti_zlomky(Zlomek z1, Zlomek z2)
{
    Zlomek vysledek;
    int jmenovatel = z1.jmenovatel * z2.jmenovatel;
    int citatel = z1.citatel * z2.jmenovatel + z2.citatel * z1.jmenovatel;
    int gcd = nejvetsi_spolecny_delitel(citatel, jmenovatel);

    vysledek.citatel = citatel / gcd;
    vysledek.jmenovatel = jmenovatel / gcd;

    return vysledek;
}


int main(int argc, char const *argv[])
{
    Zlomek z1;
    Zlomek z2;
    Zlomek soucet;

    z1.citatel = 2;
    z1.jmenovatel = 3;

    z2.citatel = -1;
    z2.jmenovatel = 6;

    soucet = secti_zlomky(z1, z2);

    printf("Soucet zlomku %d/%d a %d/%d je: %d/%d\n", 
            z1.citatel, z1.jmenovatel, 
            z2.citatel, z2.jmenovatel,
            soucet.citatel, soucet.jmenovatel);  
    return 0;
}
