#include <stdio.h>
#include <stdlib.h>


typedef struct prvek
{
	int data;
	struct prvek* pred;

} prvek;


prvek *pridej(prvek *zasobnik, int data)
{
	prvek* novy = (prvek*)malloc(sizeof(prvek));;
	novy->data = data;
	novy->pred = zasobnik;

	return novy;
}


int vrchol(prvek* zasobnik)
{
	return zasobnik->data;
}


prvek *odeber(prvek* zasobnik)
{
	prvek* pred = zasobnik->pred;
	free(zasobnik);

	return pred;
}


int main(int argc, char const *argv[])
{
   prvek* z=NULL;
   int i;

   for (i=1; i<11; i++)
   {
		z = pridej(z, i);
   }
   
   while (z!=NULL)
   {
		printf("%i\n", vrchol(z));
		z=odeber(z);
   }

   return 0;
}