#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

void print_error_and_exit()
{
    _putchar('E');
    _putchar('r');
    _putchar('r');
    _putchar('o');
    _putchar('r');
    _putchar('\n');
    exit(98);
}

void print_result(char *result)
{
    int i = 0;
    while (result[i] == '0')
        i++;

    if (result[i] == '\0')
        _putchar('0');
    else
    {
        while (result[i])
        {
            _putchar(result[i]);
            i++;
        }
    }
    _putchar('\n');
}

int main(int argc, char *argv[])
{
    int len1, len2;
    char *result;
    int i, j, carry;
    
    if (argc != 3)
        print_error_and_exit();
    
    len1 = 0;
    while (argv[1][len1])
    {
        if (argv[1][len1] < '0' || argv[1][len1] > '9')
            print_error_and_exit();
        len1++;
    }
    
    len2 = 0;
    while (argv[2][len2])
    {
        if (argv[2][len2] < '0' || argv[2][len2] > '9')
            print_error_and_exit();
        len2++;
    }

    if (len1 == 0 || len2 == 0)
        print_error_and_exit();
    
    result = malloc(sizeof(char) * (len1 + len2 + 1));
    if (result == NULL)
        return (1);

    for (i = 0; i < len1 + len2; i++)
        result[i] = '0';
    result[i] = '\0';

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            carry = (result[i + j + 1] - '0' + ((argv[1][i] - '0') * (argv[2][j] - '0')) + carry) / 10;
            result[i + j + 1] = ((result[i + j + 1] - '0') + ((argv[1][i] - '0') * (argv[2][j] - '0')) + carry) % 10 + '0';
        }
        result[i + j + 1] = carry + '0';
    }

    print_result(result);
    free(result);

    return (0);
}

