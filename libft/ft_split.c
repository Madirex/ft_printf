/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:08:24 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/06 12:04:15 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	ft_countwords(char const *s, char c)
{
	int	q;

	q = 0;
	while (*s)
	{
		if (*s != c)
		{
			q++;
			s += ft_wordlen(s, c);
		}
		else
			s++;
	}
	return (q);
}

static void	*free_strings(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		wscount;
	int		i;

	if (!s)
		return (0);
	wscount = ft_countwords(s, c);
	matrix = malloc(sizeof(char *) * (wscount + 1));
	if (!matrix)
		return (0);
	matrix[wscount] = 0;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			matrix[i] = ft_substr(s, 0, ft_wordlen(s, c));
			if (!matrix[i++])
				return (free_strings(matrix));
			s += ft_wordlen(s, c);
		}
		else
			s++;
	}
	return (matrix);
}
