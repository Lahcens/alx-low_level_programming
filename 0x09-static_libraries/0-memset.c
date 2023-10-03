#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s;
	unsigned int value = b;

	for (i = 0; i < n; i++)
	{
		memory[i] = value;
	}
	return (memory);
}
