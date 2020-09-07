/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 09:14:50 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/07 14:26:00 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t              i;
    unsigned char       *s1_pt;
    unsigned char       *s2_pt;

    i = 0;
    s1_pt = (unsigned char *)s1;
    s2_pt = (unsigned char *)s2;

    if (!n)
        return (0);
    while (!(*(s1_pt + i) - *(s2_pt + i)) && i < n)
       i++; 
    if (i == n)
        return (0);
    return (*(s1_pt + i) - *(s2_pt + i));
}
