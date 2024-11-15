/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:25:04 by mcorcher          #+#    #+#             */
/*   Updated: 2024/10/03 20:09:51 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%ld\n", ft_strlen(argv[1]));
		return 0;
	}
	return 0;
}*/
