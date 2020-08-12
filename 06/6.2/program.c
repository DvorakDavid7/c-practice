#include <stdio.h>
#include <math.h>


unsigned int delka(char str[]){
   unsigned int index = 0;
   while (str[index] != '\0') index++;
   return index;
}


int do_desitkove(char cislo[], int zaklad)
{
    unsigned int size = delka(cislo);

    int result = 0;
    int number;

    for (int i = 0; i < size; i++)
    {
        char digit = cislo[i];
        
        if (65 <= digit && digit <= 90) 
        {
            number = (int)(digit - 55);
        }
        else 
        {
            number = (int)(digit - 48);
        }

        double base = pow(zaklad, size - 1 - i);
        result += number * base;
        
    }
    return result;
}


int main(int argc, char const *argv[])
{
    char number[] = "A1B";
    int zaklad = 12;
    
    int number_10 = do_desitkove(number, zaklad);

    printf("Cislo %s v soustave o zakladu %d\n odpovida cislu %d v desitkove soustave\n", number, zaklad, number_10);

    return 0;
}