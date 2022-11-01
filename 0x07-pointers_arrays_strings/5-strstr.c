#include "main.h"

/**
 * _strstr - locates the substring
 * @haystack: the string to be searched
 * @needle:the subring to belocated
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystacks);
				
				index++;

			} while (haystacks[index] == needle[index]);
		}

		haystacks++;
	}
	
	return ('\0');
}
