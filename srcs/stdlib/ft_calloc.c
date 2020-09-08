/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 11:43:51 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/08 15:12:06 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    char        *res;
    size_t      len;

    if (!nmemb || !size)
        return (NULL);
    len = nmemb * size;
    res = malloc(sizeof(size) * nmemb);
    while (len--)
        *(res + len) = 0;
    return (res);
}
