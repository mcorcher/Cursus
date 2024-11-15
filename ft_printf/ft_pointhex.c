/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:01:18 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/14 21:30:59 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointhex(void *ptr)
{
	int	j;

	j = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	j += ft_putstr("0x");
	j += ft_puthexadecimal((unsigned long)ptr, 'x');
	return (j);
}
