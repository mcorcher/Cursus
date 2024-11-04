/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:03:12 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/04 20:07:50 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		++i;
		str = str + 1;
	}
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
int	ft_putstr(char *str)
{
	if (!str)
	{
		return (write(1, "(null)", 6));
	}
	return (write(1, &str, ft_strlen(str)));
}
