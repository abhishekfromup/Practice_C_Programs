// Program_to_calculate_GCD_using_recursion.c

#include <stdio.h>
#include <math.h>

int GCD = 1;

int calculateGCD(int n1, int n2)
{
	int limit = 0;

	if (n1 == n2)
		return (n1);

	if ((n1 % n2) == 0)
	{
		n1 %= n2;
		n2 %= n2;
		GCD *= n2;

		return GCD * calculateGCD(n1, n2);
	}

	if ((n2 % n1) == 0)
	{
		n2 %= n1;
		n1 %= n1;
		GCD *= n1;

		return GCD * calculateGCD(n1, n2);
	}

	else
	{
		if (n1 < n2)
			limit = sqrt(n1);
		else
			limit = sqrt(n2)+1;

		for (int i = 2; i <= limit; i++)
		{
			if ((n1 % i == 0) && (n2 % i == 0))
			{
				GCD *= i;
				n1 /= i;
				n2 /= i;

				return GCD * calculateGCD(n1, n2);
			}
		}

		return 1;
	}
}

int main()
{
	int num1 = 64, num2 = 60;

	printf("GCD: \n\n%d\n\n", calculateGCD(num1, num2));

	return 0;
}