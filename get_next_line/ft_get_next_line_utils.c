/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:46:56 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/28 05:46:26 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"

size_t ft_strlen(const char *str)
{
    ssize_t len;
    len = 0;
    while (str[len])
        len++;
    return (len);
}
char *ft_strjoin(char *s1, const char *s2)
{
    int i;
    int j;
    char *mem;

    i = 0;
    j = 0;
    mem = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)*sizeof(char));
    if(!mem)
        return (NULL);
    while (s1[i])
        mem[j++] = s1[i++];
    i = 0;
    while (s2[i])
        mem[j++] = s2[i++];
    mem[j] = 0;
    free((void *)(s1));
    return (mem);
}
char *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        if(s[i] == (char)c)
            return ((char*)&s[i]);
        i++;
    }
    if (s[i] == (char)c)
        return((char *)&s[i]);
    return (NULL);
}
char *ft_strdup(const char *s)
{
    char *src;

    src = (char *)malloc(ft_strlen(s) +1);
    if (src == NULL)
        return (NULL);
    ft_strlcpy(src, s, ft_strlen(s) + 1);
    return (src);
}
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    
    i = 0;
    if (size > 0)
    {
        while (src[i] && i < size -1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i])
        i++;
    return (i);
}
