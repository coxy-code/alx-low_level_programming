#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int find_len(char *str);
char *create_array(int size);
char *iterate_zeroes(char *str);
void get_product(char *product, char *multiplier, int digit, int zeroes);
void add_numbers(char *final_product, char *next_product, int next_len);

int main(int argc, char *argv[])
{
if (argc != 3) {
fprintf(stderr, "Usage: %s num1 num2\n", argv[0]);
return 1;
}
char *num1 = argv[1];
char *num2 = argv[2];
    
int len1 = find_len(num1);
int len2 = find_len(num2);

if (len1 == 0 || len2 == 0) {
fprintf(stderr, "Error: Invalid input numbers.\n");
return 1;
}

int size = len1 + len2;
char *product = create_array(size);
char *next_product = create_array(size);

for (int i = len2 - 1; i >= 0; i--) {
int digit = num2[i] - '0';
next_product = iterate_zeroes(next_product);
get_product(next_product, num1, digit, len2 - i - 1);
add_numbers(product, next_product, size);
}

print_result(product);
free(product);
free(next_product);

return 0;
}

int find_len(char *str)
{
int len = 0;
while (str[len] != '\0')
len++;
return len;
}

char *create_array(int size)
{
char *arr = malloc(sizeof(char) * (size + 1));
if (arr == NULL) {
fprintf(stderr, "Memory allocation failed.\n");
exit(1);
}
for (int i = 0; i <= size; i++)
arr[i] = '0';
arr[size] = '\0';
return arr;
}

char *iterate_zeroes(char *str)
{
int len = find_len(str);
for (int i = len - 1; i >= 0; i--)
str[i + 1] = str[i];
str[0] = '0';
return str;
}

void get_product(char *product, char *multiplier, int digit, int zeroes)
{
int carry = 0;
int len = find_len(multiplier);
for (int i = len - 1; i >= 0; i--) {
int num = (multiplier[i] - '0') * digit + carry;
carry = num / 10;
num %= 10;
product[i + zeroes] = num + '0';
}
if (carry > 0)
product[zeroes - 1] = carry + '0';
}

void add_numbers(char *final_product, char *next_product, int next_len)
{
int carry = 0;
int len = find_len(final_product);
for (int i = len - 1; i >= 0; i--) {
int sum = (final_product[i] - '0') + (next_product[i] - '0') + carry;
carry = sum / 10;
sum %= 10;
final_product[i] = sum + '0';
}
}
