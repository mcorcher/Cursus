#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
#   include <sys/fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char    *get_next_line(int fd);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strdup(const char *s);
char *ft_strchr(const char *s, int c);
char *ft_strjoin(char *s1, const char *s2);
size_t ft_strlen(const char *str);
char *ft_extract_line(char *backup, char *line);
char *ft_extract_new_words(char *backup);
char *ft_reader(int fd, char *backup, char *buffer);
char *get_next_line(int fd);
#endif