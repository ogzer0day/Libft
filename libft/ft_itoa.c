#include <stdlib.h>

int	len(long n)
{
	int	count;

	count = (n <= 0);
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*reverse_number(long num)
{
	char	*buff;
	char	*buff2;
	char	*first;
	int		i;

	buff = malloc((len(num) + 1) * sizeof(char));
	buff2 = malloc((len(num) + 1) * sizeof(char));
	if (!buff || !buff2)
		return (NULL);
	first = buff2;
	i = 0;
	if (num < 0)
	{
		*buff2++ = '-';
		num = -num;
	}
	if (num == 0)
		buff[i++] = '0';
	while (num > 0)
	{
		buff[i++] = (num % 10) + '0';
		num /= 10;
	}
	buff[i] = '\0';
	i--;
	while (i >= 0)
		*buff2++ = buff[i--];
	*buff2 = '\0';
	free(buff);
	return (first);
}
char	*ft_itoa(int n)
{
	long	num;
	char	*str;

	num = n;
	str = reverse_number(num);
	return (str);
}
