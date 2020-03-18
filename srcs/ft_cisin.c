/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cisin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 20:09:04 by jaleman           #+#    #+#             */
/*   Updated: 2019/02/24 20:09:07 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_cisin(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            break ;
        else
            str += 1;
    }
    return (!*str ? 0 : 1);
}