#include "main.h"
#include <string.h>
char *_strcat(char *dest, char *src)
{
	int dest_len;
	char *temp;

	dest_len = strlen(dest);
	temp = dest;
	temp += dest_len;

	while (*src != '\0')
	{
		*temp = *src;
		++temp;
		++src;
	}
	*temp = '\0';
	return (dest);
}
