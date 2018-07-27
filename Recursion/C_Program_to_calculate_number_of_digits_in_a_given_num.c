// C_Program_to_calculate_number_of_digits_in_a_given_number.c

#include <stdio.h>

int numDigitCount(int num)
{
	if (num == 0)
		return 0;

	return 1 + numDigitCount(num/10);
}

int main()
{
	int n;

	printf("Please enter an Integer to count digitss in it: ");
	scanf("%d", &n);

	printf("Total number of digits in %d is: %d\n", n, numDigitCount(n));

	return 0;
}