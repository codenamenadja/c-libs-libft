/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:31:39 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/07 15:36:04 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (*(s + i))
        i++;
    if (!c)
        return ((char *)(s + i));
    while (*(s + i) != c && i != 0)
        i--;
    if (*(s + i) == c)
        return ((char *)(s + i));
    return (NULL);
}
