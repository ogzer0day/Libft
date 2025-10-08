#include <stdio.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	unsigned char *des = (unsigned char *)dest;
	const unsigned char *sr = (const unsigned char *)src;

	while (i < n)
		*des++ = sr[i++];

	return (dest);
}