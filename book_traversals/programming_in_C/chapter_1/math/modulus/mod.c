#include <stdio.h>

int mod_calc(int a, int b);

int main(int argc, char ** argv[])
{
    int first, second;
    first = 15;
    second = 4;

     int res = mod_calc(first, second);

    printf("The result is %d\n", res);

    return 0;
}

int mod_calc(int a, int b)
{
    int result = a % b;
    return result;
}

