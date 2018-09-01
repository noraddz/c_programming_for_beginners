#include <stdio.h>

int main(int argc, char * argv[])
{

	int int_var;
	float float_var;
	double double_var;
	char char_var;
	_Bool bool_var;

	int_var  = 100;
	float_var = 331.79;
	double_var = 8.44e+11;
	char_var = 'W';
	bool_var = 0;

	printf("Integer = %i\n", int_var);
	printf("Floating point = %f\n", float_var);
	printf("Double = %e\n", double_var);
	printf("Double again = %g\n", double_var);
	printf("Character = %c\n", char_var);
	printf("Boolean = %i\n", bool_var);


	return 0;
}
