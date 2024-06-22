/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:14:35 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/06 11:21:28 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		nbl;
	int		i;

	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	nbl = nb;
	if (nb < 0)
		nbl = -nb;
	i = ft_numlen(nb);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (nbl == 0)
		str[i] = '0';
	while (nbl > 0)
	{
		str[i--] = (nbl % 10) + '0';
		nbl /= 10;
	}
	if (nb < 0)
		str[i] = '-';
	return (str);
}
