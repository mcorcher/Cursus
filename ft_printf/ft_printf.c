/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:07:51 by alberto           #+#    #+#             */
/*   Updated: 2024/11/07 23:35:17 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_callargs(va_list args, unsigned char c)
{
    int len;

    len = 0;
    if (c == 'c')
        len += ft_putchar(va_arg(args, int));
    else if (c == 's')
        len += ft_putstr(va_arg(args, char *));
    else if (c == 'd' || c == 'i');
        len += ft_putnbr(va_arg(args, int));
    else if (c == 'u')
        len += ft_putunbr(va_arg(args, unsigned int));
    else if (c == 'x')
        len += ft_puthexadecimal_lowercase(va_arg(args, unsigned int));
    else if (c == 'X')
        len += ft_puthexadecimal_uppercase(va_arg(args, unsigned int));
    else if (c == 'p')
        len += ft_pointhex(va_arg(args, void*));
    else if (c == '%')
        len += ft_putchar('%');
    return (len);
}
int	ft_printf(char const *enter_str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, enter_str);
	while (enter_str[i])
	{
		if (enter_str[i] == '%' && enter_str[i + 1])
		{
			len += ft_enter_str(args, enter_str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(enter_str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
