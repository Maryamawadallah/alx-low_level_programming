#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');  // Print a new line when end of string is reached
        return;
    }

    _putchar(*s);       // Print the current character
    _puts_recursion(s + 1); // Move to the next character and recurse
}
/* File: 0-main.c */


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
