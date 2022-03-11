#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{char ch[] = {'a', 'A'};

	while (ch[0] <= 'z')
	{
		putchar(ch[0]);
		ch[0]++;
	}

	while (ch[1] <= 'Z')
	{
		putchar(ch[1]);
		ch[1]++;
	}
	putchar('\n');
	return (0);
}
