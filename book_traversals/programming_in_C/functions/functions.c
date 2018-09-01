#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);

int main(int argc, char * argvp[])
{

	int f, s, result;
	f = 10;
	s = 2;

	result = add(f, s);
	printf("The result is %d\n", result);

	return 0;
}


int add(int a, int b)
{
	int sum = a + b;
	return sum;

}
