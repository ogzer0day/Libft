/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzougari <mzougari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:16:58 by mzougari          #+#    #+#             */
/*   Updated: 2025/10/18 13:19:41 by mzougari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*reverse_number(long num, char *str, int *index)
{
	int		j;
	char	*buff;

	j = 0;
	buff = malloc((len(num) + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	if (num < 0)
		buff[j++] = '-';
	while (--(*index) >= 0)
		buff[j++] = str[(*index)];
	buff[j] = '\0';
	free(str);
	return (buff);
}

static char	*convert(long num, int *signe, int *index)
{
	char	*buff;

	buff = malloc((len(num) + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	if (num == 0)
	{
		buff[(*index)++] = '0';
		buff[(*index)] = '\0';
		return (buff);
	}
	if (num < 0)
	{
		num = -num;
		*signe = -1;
	}
	while (num != 0)
	{
		buff[(*index)++] = (num % 10) + '0';
		num /= 10;
	}
	buff[*index] = '\0';
	return (buff);
}

char	*ft_itoa(int n)
{
	long	num;
	int		i;
	char	*res;
	int		signe;

	num = n;
	i = 0;
	signe = 0;
	res = convert(num, &signe, &i);
	if (!res)
		return (NULL);
	return (reverse_number(num, res, &i));
}
