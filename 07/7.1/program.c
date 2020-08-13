#include <stdio.h>
#include <string.h>


typedef struct datum 
{
    int den;
    int mesic;
    int rok;
} Datum;


typedef struct student 
{
    char jmeno[20];
    char prijmeni[20];
    Datum narozen;

} Student;



int porovnej_vek(Student s1, Student s2)
{
    /* rovnost */
    if (s1.narozen.den == s2.narozen.den && 
        s1.narozen.mesic == s2.narozen.mesic &&
        s1.narozen.rok == s2.narozen.rok
        )
        return 0;

    /* s2 je starsi */
    if (s1.narozen.rok > s2.narozen.rok)
        return 1;
    else if (s1.narozen.rok == s2.narozen.rok)
    {
        if (s1.narozen.mesic > s2.narozen.mesic)
            return 1;
        else if (s1.narozen.mesic == s2.narozen.mesic)
        {
            if (s1.narozen.den > s2.narozen.den)
                return 1;
        }
    }

    /* s1 je starsi */
    return -1;
}



int main(int argc, char const *argv[])
{
    Student s1;
    Student s2;

    strcpy(s1.jmeno, "David");
    strcpy(s1.prijmeni, "Dvorak");
    s1.narozen.rok = 1999;
    s1.narozen.mesic = 1;
    s1.narozen.den = 29;

    strcpy(s2.jmeno, "Jarda");
    strcpy(s2.prijmeni, "Novak");
    s2.narozen.rok = 1999;
    s2.narozen.mesic = 10;
    s2.narozen.den = 13;

    switch (porovnej_vek(s1, s2))
    {
    case 0:
        printf("%s %s je stejne stary jako %s %s\n", s1.jmeno, s1.prijmeni, s2.jmeno, s2.prijmeni);
        break;
    
    case 1:
        printf("%s %s je starsi nez %s %s\n", s2.jmeno, s2.prijmeni, s1.jmeno, s1.prijmeni);
        break;
    
    case -1:
        printf("%s %s je starsi nez %s %s\n", s1.jmeno, s1.prijmeni, s2.jmeno, s2.prijmeni);
        break;

    default:
        break;
    }
    
    return 0;
}
