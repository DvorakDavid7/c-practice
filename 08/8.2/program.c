#include <stdio.h>


char* strrstr(char *text, char *hledany)
{
    char* result;
    char* starter;
    int flag = 1;

    starter = hledany;
    while (*text != '\0')
    {   
        if (*text == *hledany)
        {
            if (flag)
            {
                result = text;
                flag = 0;
            }
            text++;
            hledany++;
            if (*hledany == '\0')
            {
                return result;
            }
        }
        else
        {
            flag = 1;
            text++;
            hledany = starter;
        }
    }
    return NULL;
}


int main(int argc, char const *argv[])
{
    char text[] = "Ahsveoj svete!";
    char hledany[] = "svet";

    char* result = strrstr(text, hledany);
    printf("Text: \"%s\"\n", text);
    printf("Hledame: \"%s\"\n", hledany);
    printf("Vraceny ukazatel: \"%s\"\n", result);
    
    return 0;
}