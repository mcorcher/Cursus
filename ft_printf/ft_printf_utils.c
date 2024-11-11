/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:47:52 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/07 23:36:27 by mcorcher         ###   ########.fr       */
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
int	ft_putstr(char *str, int j)
{
	if (str == NULL)
	{
		j += write(1, "(null)", 6);
		return (j);
	}
	j += write(1, str, ft_strlen(str));
	return (j);
}
int	ft_putnbr(int n)
{
	int	res;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	res = n % 10;
	if (n > 9)
		ft_putnbr(n / 10);
	res += 48;
	write(1, &res, 1);
	return (res);
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
