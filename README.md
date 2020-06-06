# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihhan <jihhan@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/06 15:28:29 by jihhan            #+#    #+#              #
#    Updated: 2020/06/06 15:35:09 by jihhan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Rules
    1. makesure appropriate permissions on files ans dirs
    1. compile options: -Wall -Wextra -Werror and use gcc

### simple_libft.a

**members**
    - ``int ft_putchar(int c);``
        - DESC
            ``putchar(c)`` is equivalent to ``putc(c, stdout)``;
        - RETURNS
            

void ft_putchar(char c)
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);


### additional

- ``#define ft_putc(c, fd);``
    - DESC
        writes the character c, **cast to unsigned char**, to stream.
    - RETURNS
        a Character written as **unsigned char cast to int or EOF on error**

