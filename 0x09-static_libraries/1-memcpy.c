#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *from = src;

	char *to = dest;

	unsigned int index;

	for (index = 0; index < n; index++)
	{
		to[index] = from[index];
	}
	return (dest);
}
