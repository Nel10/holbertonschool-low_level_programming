#include <stdio.h>

/**
 * main - intrinsic data type
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	a = sizeof(char);
	b = sizeof(int);
	c = sizeof(long int);
	d = sizeof(long long int);
	e = sizeof(float);
	printf("size of a char:%d byte(s)\n", a);
	printf("size of an int:%d byte(s)\n", b);
	printf("size of a long int:%d byte(s)\n", c);
	printf("size of a long long int:%d byte(s)\n", d);
	printf("size of a float:%d byte(s)\n", e);
	return (0);
}
