#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
double divide(double a, double b);

int main(int argc, char ** argv[])
{
	int first, second;
	float num_1, num_2;

	first = 10;
	second = 2;
	num_1 = 10.00;
	num_2 = 2.00;

	printf("Sum: %d\n", add(first, second));
	printf("Difference: %d\n", sub(first, second));
	printf("product: %d\n", mult(first, second));
	printf("quotient: %.2f", divide(num_1, num_2));


	return 0;
}

int add(int a, int b)
{
	return (a + b);
}
int sub(int a, int b)
{
	return (a - b);
}
int mult(int a, int b)
{
	return (a * b);
}
double divide(double a, double b)
{
	return (a / b);
}
