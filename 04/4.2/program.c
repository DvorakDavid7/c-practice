#include <stdio.h>

int MAX = 100;

int is_prime(int num)
{   
    for (int i = 2; i < num / 2 + 1; i++)
    {
        if (num % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}


int main(int argc, char const *argv[])
{
    for (int i = 2; i < MAX; i++)
    {   
        if (is_prime(i))
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
    
    return 0;
}
