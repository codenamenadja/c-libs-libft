#ifndef __LIBFT_V1_H
# define __LIBFT_V1_H
int ft_strlen(char *str);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnchr(const char *s, int c, size_t n);

char *ft_strdup(const char *s);
char *ft_strndup(const char *s, size_t n);
#endif
