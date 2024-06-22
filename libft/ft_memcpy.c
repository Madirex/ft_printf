/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:27:30 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/06 12:21:12 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*a;
	unsigned char		*b;
	size_t				i;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	i = 0;
	while (!n || dst == src)
		return (dst);
	while (n > i)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}
