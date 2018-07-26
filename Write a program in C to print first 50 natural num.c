 // Write a program in C to print first 50 natural numbers using recursion

#include <stdio.h>

void naturalNumumPrint(int);

void naturalNumumPrint(int n)
{
	if (n == 0)
		return;

	naturalNumumPrint(n-1);
	printf("%d, \n", n);
}

int main()
{
	naturalNumumPrint(50);

	return 0;
}