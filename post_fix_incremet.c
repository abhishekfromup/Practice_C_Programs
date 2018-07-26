// post_fix_incremet.c

#include <stdio.h>

int main()
{
	int x = 5, y = 3, z, w;

	z = x+++y+++x;

	printf("z: %d, %d, %d, %d\n", z, x++, x++, x++);


	return 0;
}