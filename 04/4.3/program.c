#include <stdio.h>


int main(int argc, char const *argv[])
{
    int size;

    printf("Zadejte velikost ctverce: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("*");
    }
    printf("\n");

    for (int j = 0; j < size - 2; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if (i == 0 || i == size - 1) 
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");  
    }

    for (int i = 0; i < size; i++)
    {
        printf("*");
    }
    

    printf("\n");    
    return 0;
}
