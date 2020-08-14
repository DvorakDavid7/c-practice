#include <stdio.h>


int porovnej(char *t1, char *t2)
{
    while (*t1 != '\0' || *t2 != '\0')
    {
        if (*t1 > *t2)
            return 1;
        else if (*t1 < *t2)
            return -1;
        else
        {
            t1++;
            t2++;
        }
    }
    return 0;
}


int main(int argc, char const *argv[])
{
    char text1[] = "ahoj";
    char text2[] = "abcde";

    switch (porovnej(text1, text2))
    {
    case 1:
        printf("slovo \"%s\" je vetsi nez slovo \"%s\"\n", text1, text2);
        break;
    
    case 0:
        printf("slovo \"%s\" je stejne velke jako slovo \"%s\"\n", text1, text2);
        break;

    case -1:
        printf("slovo \"%s\" je mensi nez slovo \"%s\"\n", text1, text2);
        break;
    
    default:
        break;
    }
    return 0;
}