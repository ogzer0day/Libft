/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzougari <mzougari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:34:21 by mzougari          #+#    #+#             */
/*   Updated: 2025/10/19 16:01:00 by mzougari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *s, unsigned int start)
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
	size_t			len_s;
	size_t			j;

	if (!s)
		return (NULL);
	len1 = ft_len(s, start);
	buff = malloc((len1 + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s == 0 || len1 == 0 || start >= len_s)
	{
		*buff = '\0';
		return (buff);
	}
	j = 0;
	while (s[start] && j < len)
	{
		buff[j++] = s[start++];
	}
	buff[j] = '\0';
	return (buff);
}
