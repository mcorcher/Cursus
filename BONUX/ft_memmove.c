/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:56:44 by mcorcher          #+#    #+#             */
/*   Updated: 2024/10/07 22:56:32 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destino;
	unsigned char	*source;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	destino = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (destino > source)
	{
		i = n;
		while (i > 0)
		{
			i--;
			destino[i] = source[i];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
