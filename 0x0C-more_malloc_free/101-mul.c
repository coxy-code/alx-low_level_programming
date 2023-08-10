#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

void print_error_and_exit()
{
    printf("Error\n");
    exit(98);
}

int main(int argc, char *argv[])
{
    int i, j, carry, result, len1, len2, num1, num2;
    
    if (argc != 3)
        print_error_and_exit();
    
    len1 = 0;
    while (argv[1][len1])
    {
        if (!isdigit(argv[1][len1]))
            print_error_and_exit();
        len1++;
    }
    
    len2 = 0;
    while (argv[2][len2])
    {
        if (!isdigit(argv[2][len2]))
            print_error_and_exit();
        len2++;
    }

    if (len1 == 0 || len2 == 0)
        print_error_and_exit();
    
    for (i = len1 - 1; i >= 0; i--)
    {
        num1 = argv[1][i] - '0';
        carry = 0;
        
        for (j = len2 - 1; j >= 0; j--)
        {
            num2 = argv[2][j] - '0';
            
            result = num1 * num2 + carry;
            
            if (i + j == 0 && result == 0)
                break;

            if (i + j != 0)
            {
                result += (argv[1][i - 1] - '0') * num2;
            }

            if (j > 0)
            {
                result += (argv[2][j - 1] - '0') * num1;
            }

            carry = result / 10;
            argv[2][j] = (result % 10) + '0';
        }
    }

    printf("%s\n", argv[2]);
    return (0);
}

