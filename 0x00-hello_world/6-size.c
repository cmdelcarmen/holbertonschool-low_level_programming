#include <stdio.h>

/**
* main - function prints the required text and returns 0
* Return: 0
*/

int main(void)
{
    char char_var:
    int int_var;
    long int long_int_var;
    long long int long_long_int;
    float float_var;

    printf("Size of a char: %zu byte(s)\n", sizeof(char_var));
    printf("Size of an int: %zu byte(s)\n", sizeof(int_var));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long_int_var));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_int));
    printf("Size of a float: %zu byte(s)\n", sizeof(float_var));
    return (0);
}


