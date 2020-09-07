/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 15:41:14 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/04 13:22:05 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memset(void *s, int c, size_t n)
{
    char    *s_pt;
    char    key;
    size_t  i;

    key         = (char)c;
    s_pt        = (char *)s;
    i           = 0;

    while (i < n && *(s_pt + i))
    {
        *(s_pt + i) = key;
        i++;
    }
    return (s);
}
