/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberto <alberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:47:52 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/05 18:46:42 by alberto          ###   ########.fr       */
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
int		ft_putunbr(unsigned int n)
{
	unsigned int	res;
	int	result;
	
	res = n % 10;
	result = 0;
	if (n > 9)
		result = ft_putunbr(n / 10);
	res += 48;
	result += write(1, &res, 1);
	return (result);
}
