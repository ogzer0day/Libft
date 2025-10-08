#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char const *s, unsigned int start)
{
	int	len;

	len = 0;
	while (s[start])
	{
		len++;
		start++;
	}
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	len1;
	char			*buff;
	unsigned int	len_s;
	char			*first;
	size_t			j;

	if (!s)
		return (NULL);
	len1 = ft_strlen(s, start);
	buff = malloc((len1 + 1) * sizeof(char));
	len_s = 0;
	if (!buff)
		return (NULL);
	while (s[len_s])
		len_s++;
	if (len_s == 0 || len == 0 || start >= len_s)
	{
		*buff = '\0';
		return (buff);
	}
	first = buff;
	j = 0;
	while (s[start] && j < len)
	{
		*buff++ = s[start++];
		j++;
	}
	*buff = '\0';
	return (first);
}
