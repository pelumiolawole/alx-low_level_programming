#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;
    int strlen;
    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
