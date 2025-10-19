/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzougari <mzougari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:22:15 by mzougari          #+#    #+#             */
/*   Updated: 2025/10/19 10:10:07 by mzougari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*solve_words(const char *str, char c, int *index)
{
	int		i;
	int		len_word;
	char	*word;

	i = *index;
	len_word = 0;
	while (str[i] && str[i] == c)
		i++;
	*index = i;
	while (str[i] && str[i] != c)
	{
		len_word++;
		i++;
	}
	word = malloc((len_word + 1) * sizeof(char));
	if (!word)
		return (NULL);
	word[len_word] = '\0';
	i = 0;
	while (str[*index] && str[*index] != c)
		word[i++] = str[(*index)++];
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	int		index;
	char	**buff;

	words = count_word(s, c);
	i = 0;
	index = 0;
	buff = malloc((words + 1) * sizeof(char *));
	if (!buff)
		return (NULL);
	while (i < words)
		buff[i++] = solve_words(s, c, &index);
	buff[i] = NULL;
	return (buff);
}
