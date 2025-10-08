#include <stdio.h>
#include <stdlib.h>

char	is_valid(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char const *s1)
{
	int	len;

	len = 0;
	while (s1[len])
		len++;
	return (len);
}

int	len(char const *s1, int i, int j)
{
	int	len;

	len = 0;
	while (s1[i] && i <= j)
	{
		i++;
		len++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*buff;
	char	*first;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_valid(set, s1[start]))
		start++;
	while (end >= 0 && is_valid(set, s1[end]))
		end--;
	buff = malloc((len(s1, start, end) + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	first = buff;
	while (s1[start] && start <= end)
		*buff++ = s1[start++];
	*buff = '\0';
	return (first);
}
