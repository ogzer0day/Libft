/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzougari <mzougari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:29:59 by mzougari          #+#    #+#             */
/*   Updated: 2025/10/17 16:22:01 by mzougari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		i--;
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((char *)&s[i]);
	}
	if (((unsigned char *)s)[0] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}
