// calculate_the_sum_of_numbers_from_1_to_n_using_recursion.c

#include <stdio.h>

int sumOfNNumbers(int);

int sumOfNNumbers(int n)
{
	if (n == 0)
		return 0;

	return n + sumOfNNumbers(n-1);
}

int main()
{
	printf("sum of first 10 natural numbers: %d\n", sumOfNNumbers(10));

	return 0;
}