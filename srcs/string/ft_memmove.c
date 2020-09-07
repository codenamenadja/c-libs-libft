/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 16:35:47 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/04 13:24:56 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t      i;
    char        buf[n+1];
    char        *dest_pt;
    char        *src_pt;

    i               = 0;
    buf[n+1]        = '\0';
    src_pt          = (char *)src;
    dest_pt         = (char *)dest;

    if (!(n))
        return (dest);

    while (i < n)
    {
        buf[i] = *(src_pt + i);
        i++;
    }

    i = 0;

    while (*(dest_pt + i) && i < n)
    {
        *(dest_pt + i) = *(buf + i);
        i++;
    }

    return (dest);
}
