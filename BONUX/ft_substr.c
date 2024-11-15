/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:20:07 by mcorcher          #+#    #+#             */
/*   Updated: 2024/10/08 19:46:05 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	char	*p;

	i = 0;
	str = (char *)s;
	if (!str || start > ft_strlen(str))
	{
		p = (char *) ft_calloc(1, sizeof(char));
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (len > (ft_strlen(str) - start))
		len = ft_strlen(str) - start;
	p = (char *) ft_calloc((len + 1), sizeof(char));
	if (p == 0)
		return (0);
	str += start;
	while (*str && (i < len))
		p[i++] = *str++;
	return (p);
}
