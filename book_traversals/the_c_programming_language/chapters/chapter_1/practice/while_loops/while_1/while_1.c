#include <stdio.h>
int main(int argc, char * argvp[])
{

	int lower, upper;

	lower = 0;
	upper = 10;

	while(lower <= upper)
	{
		printf("%d\n", lower);
		lower = lower + 1;
	}

	return 0;
}
