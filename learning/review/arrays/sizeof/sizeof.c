#include <stdio.h>

int main(int argc, char * argv[])
{
	char name[20] = "Roberto Daglio";
	long unsigned int size = sizeof(name);
	int counter = 0;
	
	for(counter = 0; counter <= size; counter++)
	{
		printf("%s", &name[counter]);
	}

	return 0;
}
