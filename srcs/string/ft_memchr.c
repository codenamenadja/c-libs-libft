/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 16:24:47 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/07 13:14:46 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        *ft_memchr(const void *s, int c, size_t n)
{
    size_t              i;
    unsigned char       *s_pt;
    unsigned char       key;

    i = 0;
    s_pt = (unsigned char *)s;
    key = (unsigned char)c;

    while ((i < n) && (key - *(s_pt + i)))
        i++;

    if (i == n)
        return (NULL);

    return ((unsigned char *)s + i);
}
