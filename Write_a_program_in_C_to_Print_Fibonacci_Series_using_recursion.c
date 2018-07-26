// Write_a_program_in_C_to_Print_Fibonacci_Series_using_recursion.c

#include <stdio.h>

int terms = 15;
static int i = 2;

int fibonacciPrinting(int, int);

int fibonacciPrinting(int pre_num, int curr_num)
{
	// static int i = 1;
	int next_num;
	if (i == terms)
		return 0;

	else
	{
		next_num = pre_num + curr_num;
		pre_num = curr_num;
		curr_num = next_num;

		printf("%d, ", next_num);
		i++;

		fibonacciPrinting(pre_num, curr_num);
	}
}

int main()
{
	int p1 = 0, p2 = 1;

	printf("0, 1, ");
	fibonacciPrinting(0, 1);

	return 0;
}

// https://www.geeksforgeeks.org/what-are-static-functions-in-c/
// https://www.geeksforgeeks.org/memory-layout-of-c-program/
// https://www.geeksforgeeks.org/static-variables-in-c/