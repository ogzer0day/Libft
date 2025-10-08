#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*buff;
	char	*first;

	buff = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	first = buff;
	while (*src)
		*buff++ = *src++;
	*buff = '\0';
	return (first);
}
