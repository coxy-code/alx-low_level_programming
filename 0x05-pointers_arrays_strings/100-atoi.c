#include "main.h"

int _atoi(char *s)
{
int sign = 1; // Sign of the number, 1 for positive, -1 for negative
int result = 0; // The final result

// Skip leading white spaces
while (*s == ' ')
s++;

// Check for the sign
if (*s == '-' || *s == '+')
{
if (*s == '-')
sign = -1;
s++;
}
// Convert the numeric characters to an integer
while (*s >= '0' && *s <= '9')
{
// Check for overflow before multiplying by 10 and adding the next digit
if (result > (INT_MAX - (*s - '0')) / 10)
{
// Overflow detected, return INT_MAX or INT_MIN based on the sign
return sign == 1 ? INT_MAX : INT_MIN;
}

result = result * 10 + (*s - '0');
s++;
}

// Apply the sign to the final result
return result * sign;
}

