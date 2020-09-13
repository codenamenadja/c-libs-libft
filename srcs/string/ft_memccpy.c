/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 09:23:23 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/13 14:00:55 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t          i;
    char            *dest_pt;
    char            *src_pt;

    i           = 0;
    dst_pt      = (char *)dest;
    src_pt      = (char *)src;

    while (i < n && c != *(src_pt + i))
    {
        *(dest_pt + i) = *(src_pt + i);
        i++;
    }
    if (i == n)
        return (NULL);
    (*dest_pt + i) = *(src_pt + i);  
    return (dest + ++i);
}
