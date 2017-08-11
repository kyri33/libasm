#ifndef  LIBASM_H
# define LIBASM_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>

void    ft_bzero(void *s, size_t n);
size_t  ft_strlen(const char *s);
char    *ft_strcat(char *s1, const char *s2);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);

#endif