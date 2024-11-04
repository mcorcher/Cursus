/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 23:37:12 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/04 20:22:20 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
