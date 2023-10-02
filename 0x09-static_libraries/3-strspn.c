#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				count++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (count);
		}
		s++;

	}
	return (count);
}
