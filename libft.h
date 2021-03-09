
#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
void *ft_memset(void *s, int c, size_t n);
void *ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
#endif