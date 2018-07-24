// string_copying.c

#include <stdio.h>

void stringCopy(char *p, char *q)
{
	while (*q++ = *p++);
}

int main()
{

	char *my_name_cpy, *mn, *mnc, *my_name = "Abhishek Singh";
	mn = my_name;
	mnc = my_name_cpy;

	printf("my_name: %s \nmy_name_cpy: %s \n\n\b", my_name, my_name_cpy);
	stringCopy(mn, mnc);
	printf("my_name: %s \nmy_name_cpy: %s \n\n\b", my_name, my_name_cpy);

	return 0;
}
