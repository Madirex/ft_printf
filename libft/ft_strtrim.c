/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:54:45 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/02 11:50:59 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set_char(char c, const char *set)
{
	size_t	i;

	if (set)
	{
		i = 0;
		while (set[i])
		{
			if (set[i] == c)
				return (1);
			i++;
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	int		i;

	i = 0;
	start = 0;
	if (s1 && set)
	{
		end = (int)ft_strlen(s1);
		while (s1[start] && is_set_char(s1[start], set))
			start++;
		while (end > start && is_set_char(s1[end - 1], set))
			end --;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (str)
		{
			while (start < end)
				str[i++] = s1[start++];
			str[i] = '\0';
			return (str);
		}
	}
	return (0);
}
