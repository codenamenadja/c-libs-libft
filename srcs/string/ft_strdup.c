/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 18:00:23 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/07 14:30:37 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char    *ft_strdup(const char *s)
{
    ssize_t     len;
    ssize_t     i;
    char        *s_pt;

    len = 0;
    i = 0;

    while (*(s + len))
        len++;
    s_pt = malloc((len + 1) * sizeof(char));

    if (!s_pt)
        return (NULL);

    while (i < len)
    {
        *(s_pt + i) = *(s + i);
        i++;
    }
    *(s_pt + i) = '\0';
    return (s_pt);
}
