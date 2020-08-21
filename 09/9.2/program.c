#include <stdio.h>
#include <stdlib.h>


int stringLen(char* s)
{
	int counter = 0;
	while (*s++ != '\0') counter++;	
	return counter;
}


char *spojeni(char *t1, char *t2)
{
	int t1_Len = stringLen(t1);
	int t2_Len = stringLen(t2);
	int result_Len = t1_Len + t2_Len;
	char *result = (char*)calloc(result_Len, sizeof(char));
	
	for (int i = 0; i < t1_Len; i++)
	{
		*(result + i) = *(t1 + i);
	}

	for (int i = t1_Len; i < result_Len; i++)
	{
		*(result + i) = *(t2 + i - t1_Len);
	}

	return result;
}


int main(int argc, char const *argv[])
{
	char slovo1[] = "Ahoj";
	char slovo2[] = "svete";

	char *result = spojeni(slovo1, slovo2);
	printf("Spojeni slov \"%s\" a \"%s\" je \"%s\".\n", slovo1, slovo2, result);
	return 0;
}