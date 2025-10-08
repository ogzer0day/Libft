#include <stdio.h>

void	*ft_memcpy(void *destination, const void *source, size_t numBytes)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	i = 0;
	while (i < numBytes)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
