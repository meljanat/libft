/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jana <mel-jana@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:43:28 by mel-jana          #+#    #+#             */
/*   Updated: 2026/10/29 17:45:50 by mel-jana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int count;
    
    count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return count;
}
