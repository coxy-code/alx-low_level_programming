#include "main.h"
#include <stdlib.h>
#include <time.h>

/* Function to generate a random password */
void generate_password(char *password, int length) {
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int i;

for (i = 0; i < length - 1; i++) {
password[i] = charset[rand() % (sizeof(charset) - 1)];
}
password[length - 1] = '\0';
}

int main(void) {
const int password_length = 10; // Set the desired length of the password
char password[password_length];

srand((unsigned int)time(NULL)); // Seed the random number generator with the current time

generate_password(password, password_length);
printf("%s\n", password);

return 0;
}

