/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzougari <mzougari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:23:33 by mzougari          #+#    #+#             */
/*   Updated: 2025/10/16 13:52:40 by mzougari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*buff;
	char	*first;

	buff = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	first = buff;
	while (*src)
		*buff++ = *src++;
	*buff = '\0';
	return (first);
}
