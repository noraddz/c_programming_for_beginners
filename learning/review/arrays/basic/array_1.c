#include <stdio.h>
int main(int argc, char * argv[])
{

	int n[10];
	int i, j;

	for (i = 0; i < 10; i++)
	{
		n[i] = i + 10;
	}

	for (j = 0; j < 10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);
	}

	return 0;
}
