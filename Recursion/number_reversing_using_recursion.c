// number_reversing_using_recursion.c

#include <stdio.h>
#include <math.h>

int countDigits(int num)
{
	if (num == 0)
		return 0;
	return 1+countDigit(num/10);
}

int inverseNum(int num, int size)
{
	if (num == 0)
		return 0; 

	return ((num%10)*pow(10, --size) + inverseNum((num/10), size));
}

int main()
{
	int num, inversed_num;

	printf("\n\n Please enter a number to reverse: " );
	scanf("%d", &num);

	inversed_num = inverseNum(num, countDigits(num));
	printf("\n\n Number after inversing: %d", inversed_num);

	return 0;
}