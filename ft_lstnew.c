/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdussali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:59:05 by mdussali          #+#    #+#             */
/*   Updated: 2023/09/14 14:59:06 by mdussali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newNode;

    newNode = (t_list *)malloc(sizeof(t_list));
    if (!newNode)
        return (NULL);

    newNode->content = content;
    newNode->next = NULL;
    return (newNode);
}
