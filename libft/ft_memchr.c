/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:04:54 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/03 11:22:38 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	size_t			store_i;
	size_t			i;

	str = (char *) s;
	store_i = -1;
	i = 0;
	while (i < n && store_i == (size_t) -1)
	{
		if (str[i] == (char) c)
			store_i = i;
		i++;
	}
	if (store_i == (size_t) -1)
		return (0);
	return (&str[store_i]);
}
