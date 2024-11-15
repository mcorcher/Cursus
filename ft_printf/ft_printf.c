/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:52:40 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/12 20:09:40 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_callargs(va_list args, unsigned char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_puthexadecimal(va_arg(args, unsigned int), c);
	else if (c == 'p')
		len += ft_pointhex(va_arg(args, void *));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(char const *enter, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, enter);
	while (enter[i])
	{
		if (enter[i] == '%' && enter[i + 1])
		{
			len += ft_callargs(args, enter[i + 1]);
			i++;
		}
		else
			len += ft_putchar(enter[i]);
		i++;
	}
	va_end(args);
	return (len);
}
