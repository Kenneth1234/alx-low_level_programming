#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}

}

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(const char *s)
{
int sign = 1;
unsigned long int resp = 0, firstNum, i;

for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
{
if (s[firstNum] == '-')
{
sign *= -1;
}
}

for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
{
resp *= 10;
resp += (s[i] - 48);
}
