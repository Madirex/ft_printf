/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:50:32 by anmateo-          #+#    #+#             */
/*   Updated: 2023/09/27 12:06:45 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*c1;
	char	*c2;

	i = 0;
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (((unsigned char) c1[i]) - ((unsigned char) c2[i]));
		i++;
	}
	return (0);
}
