/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 14:52:31 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/08 15:14:25 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_swab(const void *from, void *to, ssize_t n)
{
    char        *from_pt;
    char        *to_pt;

    from_pt     = (char *)from;
    to_pt       = (char *)to;

    if (n > 1)
    {
        if (n & 1)
            n--;
        n--;
        while (n > 0)
        {
            *(to_pt + n) = *(from_pt + (n - 1));
            *(to_pt + n - 1) = *(from_pt + n);
            n -= 2;
        }
    } 
}
