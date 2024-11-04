/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:47:52 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/04 19:36:31 by mcorcher         ###   ########.fr       */
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

int		ft_putpadress(size_t n);

size_t	ft_strlen(const char *str);

#endif