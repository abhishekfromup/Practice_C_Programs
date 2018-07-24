// malloc.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *x = malloc(5*sizeof(int)); // implicit type conversion
	// float *x = (float*)malloc(5*sizeof(int));  explicit type conversion as it is not must to put (float*) because malloc returns poiter of void type and we are storing it in a pointer variable of type float so automatically typecasting would happen and it would be same as of type pointer variable x. but it is a good practive to use explicit conversion...
	printf("Enter 5 elements: ");

	for (int i = 0; i < 5; i++)
		scanf("%f, \n", &x[i]);

	for (int i = 0; i < 5; i++)
		printf("%f, \n", x[i]);

	return 0;
}