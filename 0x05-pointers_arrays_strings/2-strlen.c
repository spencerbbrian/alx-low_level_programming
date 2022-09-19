#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input stringeturn.
 * Return: length of a string.
 */
void int_strlen(char *s)
{
    int count = 0;

    while (*(s + count) != '\0')
        count++;
    return (count);
}
