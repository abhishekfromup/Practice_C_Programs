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
	
	if (n1 < n2)
		limit = sqrt(n1)+1;
	else
		limit = sqrt(n2)+1;

	int flag = 0;

	for (int i = 2; i <= limit; i++)
	{
		if ((n1 % i == 0) && (n2 % i == 0))
		{
			flag = 1;
			GCD *= i;
			n1 /= i;
			n2 /= i;			
		}		
	}
	if (!flag)
		return GCD*1;
	else
		// printf("GD: %d", GCD);
		return calculateGCD(n1, n2);
}

int main()
{
	int num1 = 420, num2 = 360;

	printf("GCD of %d and %d: %d\n", calculateGCD(num1, num2));

	return 0;
}