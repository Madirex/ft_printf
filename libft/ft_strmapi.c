/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:37:29 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/03 12:07:14 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	char	*new_s;
	int		i;

	if (!s)
		return (0);
	size = ft_strlen((char *)s);
	new_s = malloc((size + 1) * sizeof(char));
	if (!new_s)
		return (0);
	i = 0;
	while (i < size)
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = 0;
	return (new_s);
}
