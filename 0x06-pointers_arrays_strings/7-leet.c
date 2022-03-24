#include"main.h"
/**
 * leet - encods a string to a number
 * @s: a letter pointer
 * Return: s
 */
char *leet(char *s)
{
	int i;
	int count = 0;
	int upp_case[] = {65, 69, 79, 84, 76};
	int low_case[] = {97, 101, 111, 116, 108};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_case[i] || *(s + count) == upp_case[i])
			{
				*(s + count) = nums[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
