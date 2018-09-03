#include <stdio.h>

char get_name();

int main(int argc, char * argv[])
{
	char full_name[20] = get_name();

	printf("My full name is %s", full_name);

	return 0;
}

char get_name()
{
	char name[20] = "Rob Daglio";
	return name;
}
