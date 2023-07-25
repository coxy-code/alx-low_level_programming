#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * generate_random_password - Generate a random password
 * Return: Pointer to the dynamically allocated generated password
 */
char *generate_random_password(void)
{
    char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0';

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
    free(password);

    return 0;
}

