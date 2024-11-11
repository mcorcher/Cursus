/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberto <alberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:47:52 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/06 17:30:12 by alberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char const *str, ...);

int		ft_putchar(char c);

int		ft_putstr(char *str);

int		ft_putnbr(int n);

int		ft_putunbr(unsigned int n);

int		ft_puthexadecimal_lowercase(unsigned int n);

int		ft_puthexadecimal_uppercase(unsigned int n);

int     ft_pointhex(void *ptr)

size_t	ft_strlen(const char *str);

#endif