/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberto <alberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:04:11 by alberto           #+#    #+#             */
/*   Updated: 2024/11/06 17:29:57 by alberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int   ft_pointhex(void *ptr)
{
    int                j;
    unsigned long long conv;
    
    conv = (unsigned long long)ptr;
    if (prt == 0)
    {
        j += write(1, "(nil)", 5);
        return (j);
    }
    j = ft_putstr("0x", j);
    j = ft_puthexadecimal_lowercase(conv, j);
    return (j);
}