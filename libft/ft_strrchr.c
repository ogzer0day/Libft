#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*strrchr(const char *str, int c)
{
	char	*p;
	int		i;

	p = (char *)str;
	i = ft_strlen(p);
	while (i >= 0)
	{
		if (p[i] == c)
			return (&p[i]);
		i--;
	}
	return (NULL);
}
