/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 09:23:23 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/04 16:10:22 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t          i;
    char            *dest_pt;
    char            *src_pt;

    i           = 0;
    dest_pt     = (char *)dest;
    src_pt      = (char *)src;

    while (i < n && *(dest_pt + i))
    {
        *(dest_pt + i) = *(src_pt + i);
        i++;
    }

    return (dest);
}
