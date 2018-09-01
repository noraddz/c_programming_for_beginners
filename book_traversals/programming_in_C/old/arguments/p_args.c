#include <stdio.h>

int main(int argc, char * argv[])
{

	if(argc == 3)
	{
		printf("The arguments are %s and %s\n", argv[1], argv[2]);
	}
	else if(argc > 3)
	{
		printf("Too many arguments...\n");
	}
	else
	{
		printf("At least two arguments expected...\n");
	}
	


	return 0;
}
