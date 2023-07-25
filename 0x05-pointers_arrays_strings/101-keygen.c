#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * generate_random_password - Generate a random password
 * Return: Pointer to the generated password
 */
char *generate_random_password(void)
{
    static char password[PASSWORD_LENGTH + 1] = {0};
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    return password;
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *password;

    password = generate_random_password();
    printf("%s\n", password);

    return 0;
}


