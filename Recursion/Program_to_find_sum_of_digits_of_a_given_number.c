// Program_to_find_sum_of_digits_of_a_given_number.c

#include <stdio.h>

int numDigitsSum(int num)
{
	if (num == 0)
		return 0;

	return (num%10 + numDigitsSum(num/10));
}

int main()
{
	int n;

	printf("Please enter an Integer to get sum of its digits: ");
	scanf("%d", &n);

	printf("\nSum of %d digits is: %d \n\n", n, numDigitsSum(n));

	return 0;
}