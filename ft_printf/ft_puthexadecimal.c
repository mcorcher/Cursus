/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:29:19 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/04 20:00:27 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_puthexadecimal_lowercase(unsigned int n)
{
int		i;
char	hex[9];
int		rest;
int		j;
 
i = 0;
if (n == 0)
	return (write(1, "0x0", 3), 0);
while (n > 0)
{	
	rest = n % 16;
	if (n <= 9)
		hex[i] = '0' + rest;
	else
		hex[i] = 'a' + (rest - 10);
	n = n / 16;
	i++;	
}
j = i;
while (i > 0)
{
	i--;
	write(1, &hex[i], 1);
}
return (j);
}

int	ft_puthexadecimal_uppercase(unsigned int n)
{
int		i;
char	hex[9];
int		rest;
int		j;
 
i = 0;
if (n == 0)
	return (write(1, "0x0", 3), 0);
while (n > 0)
{	
	rest = n % 16;
	if (n <= 9)
		hex[i] = '0' + rest;
	else
		hex[i] = 'A' + (rest - 10);
	n = n / 16;
	i++;	
}
j = i;
while (i > 0)
{
	i--;
	write(1, &hex[i], 1);
}
return (j);
}
/*
int main() 
{	
    unsigned int numero = 255;
	int ret;
    ret = ft_puthexadecimal_lowercase(numero);
	printf("%d\n",ret);
	ret = printf("%x\n", numero);
	printf("%d\n",ret);
    return (0);
}
*/