/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfutils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:47:52 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/14 21:44:00 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int		len;
	char	num;

	len = 0;
	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n = n * (-1);
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	num = n % 10 + '0';
	len += ft_putchar(num);
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	int		len;
	char	num;

	len = 0;
	if (n >= 10)
		len += ft_putunbr(n / 10);
	num = n % 10 + '0';
	len += ft_putchar(num);
	return (len);
}
