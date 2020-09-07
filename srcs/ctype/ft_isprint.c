/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:30:45 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/03 14:27:13 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isprint(int c)
{
    return (
            (
             (c > 32) &&
             (c < 127)
             ) || 
            (
             (c == '\f') ||
             (c == '\n') ||
             (c == '\r') ||
             (c == '\t') ||
             (c == '\v') ||
             (c == ' ')
            ) ? 
            1 : 0
            );
}
