#include <stdio.h>
/**
 *main - contains the code for program execution
 *
 *Return: returns 0 (Success), otherwise non-zero
 */
int main (void){
	int c;

c = getchar();
while (c != EOF) {
    putchar(c);
    c = getchar();
}
putchar('\n');
return (0);
}
