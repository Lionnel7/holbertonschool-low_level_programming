#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[20] = "Hello";
    char s2[20] = "World!";
    char s3[20];

    _strcpy(s3, s2);
    printf("Après _strcpy(s3, s2): s3 = %s\n", s3);

    _strcpy(s3, s1);
    printf("Après _strcpy(s3, s1): s3 = %s\n", s3);

    _strcpy(s3, s1);
    printf("Après _strcpy(s3, s1): s3 = %s\n", s3);

    return (0);
}

/**
 * _strcpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *ptr = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}
