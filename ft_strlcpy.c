/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jana <mel-jana@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:40:35 by mel-jana          #+#    #+#             */
/*   Updated: 2026/10/14 11:41:01 by mel-jana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    if (!dst || !src)
        return 0;
    i = 0;
    while (src[i] && i + 1 < size)
    {
        dst[i] = src[i];
        i++;
    }
    if (size > 0)
        dst[i] = '\0';
    while (src[i])
        i++;
    return i;
}
