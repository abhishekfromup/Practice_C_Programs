// array_of_strings.c

#include <stdio.h>

void copyStrings(char** OS, char** CS)
{	
	for (char* i = *OS, j = 0; j < 3;j++)
	{
		char* temp1;
		char* temp2 = temp1;

		while (*temp1++ = *i++);
		*CS++ = temp2;
		 i = *++OS; 
	}
}

int main()
{
	char *arr[] = {"Abhishek", "Singh", "Chauhan"};
	char *cpy[3];

	char **p, **q;
	p = arr;
	q = cpy;
	printf("%s\n", arr[0]);
	copyStrings(p, q);
	printf("%s\n", cpy[0]);
	printf("%s\n", cpy[1]);
	printf("%s\n", cpy[2]);



	return 0;
}