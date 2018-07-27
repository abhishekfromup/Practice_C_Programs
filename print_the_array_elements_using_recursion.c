// print_the_array_elements_using_recursion.c

#include <stdio.h>

void printArr(int*, int);

void printArr(int* arr, int index)
{
	// printf("%d\n\n", index);

	if (index == 0)
		return

	// printArr(arr, index-1);
	printf("%d, ", arr[index-1]);
	printArr(arr, index-1);
	// printf("%d\n", index);
}

int main()
{
	// int index = 4
	int arr[] = {1, 2, 3, 4, 5, 6};
		// printf("%d, ", arr[index-1]);

	printArr(arr, 6);

	return 0;
}