/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzougari <mzougari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:24:14 by mzougari          #+#    #+#             */
/*   Updated: 2025/10/16 09:09:39 by mzougari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
