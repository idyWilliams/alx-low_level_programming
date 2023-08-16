#include "main.h"

/**
 * main - print _putchar
 * Return: 0
 */
int main(void)
{
    char string[] = "_putchar\n";

    for (int i = 0; string[i] != '\0'; i++)
    {
        _putchar(string[i]);
    }

    return (0);
}
