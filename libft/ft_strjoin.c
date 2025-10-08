#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*buff;
	char	*first;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	buff = malloc(((len1 + len2) + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	first = buff;
	while (*s1)
		*buff++ = *s1++;
	while (*s2)
		*buff++ = *s2++;
	*buff = '\0';
	return (first);
}
