// function_pointers_in_c.c

#include <stdio.h>

float sum(float, float);

float sum(float m, float n)
{
	return (m+n);
}


int main()
{
	float (*fun_ptr)(float, float);
	fun_ptr = sum;

	printf("%f, %f\n", sum(3,4), fun_ptr(4,5));

	return 0;
	
}