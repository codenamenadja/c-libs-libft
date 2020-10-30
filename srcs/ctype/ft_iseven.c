/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iseven.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:34:39 by jihhan            #+#    #+#             */
/*   Updated: 2020/10/30 17:41:52 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iseven(int c)
{
    unsigned int    v;

    v = (unsigned int) c;
    if (!v)
        return (-1);

    v = v % 10; 

    if (!v)
        return (1);

    return (!(v % 2));
}