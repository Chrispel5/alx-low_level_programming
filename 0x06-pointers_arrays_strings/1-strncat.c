#include "main.h"

/**
 * _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0, s2 = 0;
	
	while (dest[s1])
		s2++;
	
	for (s1 = 0; src[s1] && s2 < n; s1++)
		dest[s2++] = src[s1];
	
	return (dest);
}
