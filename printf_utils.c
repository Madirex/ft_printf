/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:05:47 by anmateo-          #+#    #+#             */
/*   Updated: 2024/04/14 18:37:45 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str_or_null(char *str)
{
	if (!str)
		return (print_str("(null)"));
	return (print_str(str));
}

int	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i += print_char(str[i]);
	return (i);
}
