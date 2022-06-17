#include "main.h"

/**
 * -strcat - Concatenates the string pointed to by @src,
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Returns: a pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int s1 = 0, s2 = 0;

	while (dest[s1++])
		s2++;

	for (s1 = 0; src[s1]; s1++)
		dest[s2++] = src[s1];
	return (dest);
}
