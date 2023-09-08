/*
 * File: 6-print_numberz.c
 * Auth: Lahyan Lahcen
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single-digit numbers of base 10 followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	putchar('\n'); /* Use putchar to print the newline character */
	return (0);
}
