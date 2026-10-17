/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jana <mel-jana@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:45:47 by mel-jana          #+#    #+#             */
/*   Updated: 2026/10/17 21:28:14 by mel-jana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
    long result = 0;
    int sign = 1;
    
    while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
        nptr++;
    
    if (*nptr == '-' || *nptr == '+')
    {
        if (*nptr == '-')
            sign = -1;
        nptr++;
    }
    
    while (*nptr >= '0' && *nptr <= '9')
    {
        if (result > 922337203685477580 || (result == 922337203685477580 && (*nptr - '0') > 7))
        {
            if (sign == 1)
                return (-1);
            return (0);
        }
        result = (result * 10) + (*nptr - '0');
        nptr++;
    }
    
    return (result * sign);
}
