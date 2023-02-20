#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char k;

	int l;

	k = 'a';
	l = '0';
	while
		(l < 10) {
			putchar(l + '0');
			l++;
		}
	while
		(k <= 'f') {
			putchar(k);
			k++;
		}
	putchar('\n');
	return (0);
}
