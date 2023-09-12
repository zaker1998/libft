/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdussali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:19:38 by mdussali          #+#    #+#             */
/*   Updated: 2023/09/12 17:19:39 by mdussali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    char *result;
    int len = (n <= 0) ? 1 : 0;
    int tmp = n;

    while (tmp)
    {
        len++;
        tmp /= 10;
    }

    result = malloc(len + 1);
    if (!result)
        return (NULL);

    result[len] = '\0';
    if (n == 0)
        result[0] = '0';
    else if (n < 0)
    {
        result[0] = '-';
        n = -n;
    }

    while (n)
    {
        result[--len] = (n % 10) + '0';
        n /= 10;
    }
    return (result);
}
