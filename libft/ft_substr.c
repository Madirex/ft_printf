/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:58:23 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/04 12:20:47 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str_return;

	if (!s)
		return (0);
	i = ft_strlen(s);
	if (start >= i)
		return (ft_strdup(""));
	if (len > i - start)
		len = i - start;
	str_return = malloc((len + 1) * sizeof(char));
	if (!str_return)
		return (0);
	ft_memcpy(str_return, s + start, len);
	str_return[len] = '\0';
	return (str_return);
}
