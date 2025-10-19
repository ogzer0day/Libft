/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzougari <mzougari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:19:40 by mzougari          #+#    #+#             */
/*   Updated: 2025/10/18 13:45:05 by mzougari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dest1;
	size_t	i;

	if (!dst || !src)
		return (NULL);
	src1 = (char *)src;
	dest1 = (char *)dst;
	if (dest1 > src1)
	{
		while (len > 0)
		{
			len--;
			dest1[len] = src1[len];
		}
	}
	else
	{
		i = -1;
		while (++i < len)
			dest1[i] = src1[i];
	}
	return (dst);
}
