/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:27:22 by mcorcher          #+#    #+#             */
/*   Updated: 2024/10/08 22:25:45 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

void	free_space(char **res, int index)
{
	while (index >= 0)
		free(res[index--]);
	free(res);
}

char	**extract_words(char const *s, char c, char **res)
{
	int	end;
	int	start;
	int	index;

	end = 0;
	start = 0;
	index = 0;
	while (s[end])
	{
		if (s[end] == c)
		{
			end++;
			start = end;
		}
		else
		{
			while (s[end] && s[end] != c)
				end++;
			res[index] = ft_substr(s, start, end - start);
			if (res[index] == NULL)
				return (free_space(res, index), NULL);
			index++;
		}
	}
	return (res[index] = NULL, res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (res == NULL)
		return (NULL);
	if (extract_words(s, c, res) == NULL)
		return (NULL);
	return (res);
}
