/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jana <mel-jana@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:06:20 by mel-jana          #+#    #+#             */
/*   Updated: 2026/10/20 11:14:01 by mel-jana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		tl;
	char	*str;
	long	num;

	num = n;
	tl = ft_numlen(n);
	str = malloc(sizeof(char) * (tl + 1));
	if (!str)
		return (NULL);
	str[tl--] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (n == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[tl--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
