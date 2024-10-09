/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:17:31 by mcorcher          #+#    #+#             */
/*   Updated: 2024/10/08 19:23:45 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	char	*p;
	size_t	i;

	p = (char *)s1;
	i = 0;
	d = (char *)malloc(ft_strlen(p) + 1);
	if (d == NULL)
		return (NULL);
	while (p[i] != '\0')
	{
		d[i] = p[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
