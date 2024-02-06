#include <stdio.h>

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}

int main()
{
	_puts_recursion("Puts with recursion");
	return 0;
}
