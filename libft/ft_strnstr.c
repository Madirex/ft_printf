/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:03:25 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/04 11:59:59 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (len > haystack_len)
		len = haystack_len;
	while (len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
