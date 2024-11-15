/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:33:12 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/14 21:41:56 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexadecimal(unsigned long num, char format)
{
	int		len;
	char	*type;

	len = 0;
	if (format == 'x')
		type = "0123456789abcdef";
	else
		type = "0123456789ABCDEF";
	if (num >= 16)
	{
		len += ft_puthexadecimal(num / 16, format);
	}
	len += ft_putchar(type[num % 16]);
	return (len);
}
