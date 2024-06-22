/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:40:35 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/06 12:49:11 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	unsigned const char	*psrc;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	pdest = (unsigned char *)dest;
	psrc = (unsigned const char *)src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		pdest[n] = psrc[n];
	return (dest);
}
