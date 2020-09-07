/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:11:29 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/07 15:29:55 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strnchr(const char *s, int c, size_t n)
{
    size_t i;

    if (!n)
        return (NULL);
    i = 0;
    while ((*(s + i) != c && *(s + i)) && i < n) 
        i++;
    if (*(s + i) == c && i < n)
        return ((char *)(s + i));
    return (NULL);
}
