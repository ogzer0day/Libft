#include <stdlib.h>

int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*buff;
	int		i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	buff = malloc((len + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buff[i] = f(i, s[i]);
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
