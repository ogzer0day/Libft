/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzougari <mzougari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:19:31 by mzougari          #+#    #+#             */
/*   Updated: 2025/10/16 09:08:21 by mzougari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t numBytes)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	i = 0;
	while (i < numBytes)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
