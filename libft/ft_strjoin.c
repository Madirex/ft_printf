/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:36:42 by anmateo-          #+#    #+#             */
/*   Updated: 2023/09/29 10:52:57 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	size_t			str_size;
	unsigned int	i;

	str_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = malloc(str_size * sizeof(char));
	if (result)
	{
		i = 0;
		while (*s1)
		{
			result[i] = *s1;
			i++;
			s1++;
		}
		while (*s2)
		{
			result[i] = *s2;
			i++;
			s2++;
		}
		result[i] = '\0';
	}
	return (result);
}
