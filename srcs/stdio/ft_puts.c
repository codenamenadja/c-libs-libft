/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 15:00:05 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/08 15:09:21 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int         ft_puts(const char *s)
{
    size_t      len;
    char        buf[BUFSIZ];

    len = 0;

    while (*(s+len))
    {
        *(buf + len) = *(s + len);
        len++;
    }

    *(buf + len) = '\n';
    return (write(STDOUT_FILENO, buf, (len + 1)));
}
