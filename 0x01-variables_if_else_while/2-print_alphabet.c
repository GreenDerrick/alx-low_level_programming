#include <stdio.h>
/**
 * main - Entry point
 * printing aphabet in lowercase followed by a new line
 *
 * Return: 0 (Always)
 */
int main(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	putchar(alpha);
}
putchar('\n');
return (0);
}
