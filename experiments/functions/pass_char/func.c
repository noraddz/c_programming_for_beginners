#include <stdio.h>

void some_function(char str[]);

int main(int argc, char * argv[])
{

	char name[20] = "Rob Daglio";
	some_function(name);


	return 0;
}

void some_function(char str[])
{
	printf("The string is %s\n", str);
}
