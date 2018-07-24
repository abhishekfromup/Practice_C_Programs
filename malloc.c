// malloc.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *x = malloc(5*sizeof(int));
	printf("Ente e ele: ");

	for (int i = 0; i < 5; i++)
		scanf("%f, \n", &x[i]);

	for (int i = 0; i < 5; i++)
		printf("%f, \n", x[i]);

	return 0;
}