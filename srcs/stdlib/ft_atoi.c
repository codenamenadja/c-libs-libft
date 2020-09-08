/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 09:30:20 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/08 15:13:34 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
    int     i;
    char    *nptr_pt;

    i = 1;
    nptr_pt = (char *)nptr;

    if (*nptr == '+' || *nptr == '-')
    {
        nptr_pt++;
        if (*nptr == '-')
            i -= 2;
    }
    while (!(*nptr_pt >= '1' && *nptr_pt <= '9'))
          if (!(*nptr_pt++))
              return (0);
    i *= (*nptr_pt++ - '0');
    while (*nptr_pt >= '0' && *nptr_pt <= '9')
    {
        i *= 10;
        if (i < 0)
            i += ~(*nptr_pt - '0') + 1;
        else
            i += (*nptr_pt - '0');
        nptr_pt++;
    }
    return (i);
}
