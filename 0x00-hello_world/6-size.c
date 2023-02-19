#include <stdio.h>

/**
 * main - prints the sizeof various types on the computer they are run on
 *
 * Return: 0
 */

int main(void)
{
	int i;
	short s;
	char c;
	long l;
	long long l;
	float f;

	printf("The size of an char is :%lu.\n", sizeof(c));
	printf("The size of a int is :%lu.\n", sizeof(i));
	printf("The size of a long int is :%lu.\n:", sizeof(l));
	printf("The size of a long long int is :%lu,\n", sizeof(ll));
	printf("The size of a float is :%lu,\n", sizeof(f));

	return(0);
}
