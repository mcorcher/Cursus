/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorcher <mcorcher@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:47:00 by mcorcher          #+#    #+#             */
/*   Updated: 2024/11/28 05:51:41 by mcorcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"

char *get_next_line(int fd)
{
    static char *backup;
    char        *line;
    char        *buffer;

    line = NULL;
    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (fd < 0 || BUFFER_SIZE <= 0)
    {
        free(backup);
        free(buffer);
        backup = NULL;
        buffer = NULL;
        return (NULL);
    }
    if (!buffer)
        return (NULL);
    backup = ft_reader(fd, backup, buffer);
    if (*backup == 0)
    {
        free (backup);
        return (backup = 0);
    }
    line = ft_extract_line(backup, line);
    backup = ft_extract_new_words(backup);
    return (line);
    }
char *ft_reader(int fd, char *backup, char *buffer)
{
    ssize_t nread;
    
    nread = 1;
    if (!backup)
        backup = ft_strdup("");
    while (nread > 0)
    {
        nread = read(fd, buffer, BUFFER_SIZE);
        if (nread < 0)
        {
            free (buffer);
            return (NULL);
        }
        buffer[nread] = 0;
        backup = ft_strjoin(backup, buffer);
        if ((ft_strchr(buffer,'\n')))
            break ;
    }
    free(buffer);
    return(backup);
}
char *ft_extract_new_words(char *backup)
{
    int len;
    int i;
    char *new_backup;

    len = 0;
    i = 0;
    if (backup == NULL)
        return (NULL);
    while (backup[len] != '\n' && backup[len])
        len++;
    if (backup[len] == '\n')
        len++;
    new_backup = malloc((ft_strlen(backup) - len + 1) * sizeof(char));
    if (!new_backup)
        return (NULL);
    while (backup[len + i])
    {
        new_backup[i] = backup[len + i];
        i++;
    }
    free (backup);
    new_backup[i] = '\0';
    return (new_backup);
}
char *ft_extract_line(char *backup, char *line)
{
    int len;
    int i;

    len = 0;
    i = 0;
    if (backup == NULL)
        return (NULL);
    while (backup[len] != '\n' && backup[len])
        len++;
    if (backup[len] == '\n')
        len++;
    line = malloc((len + 1) * sizeof(char));
    if (!line)
      return (NULL);
    while (i < len)
    {
        line[i] = backup[i];
        i++;
    }
    line[i] = '\0';
    return (line);
}