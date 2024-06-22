/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:08:55 by anmateo-          #+#    #+#             */
/*   Updated: 2024/03/30 20:33:51 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		char_count;
	int		i;

	i = 0;
	char_count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			char_count += do_format(args, str[i + 1]);
			i++;
		}
		else
			char_count += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (char_count);
}

int	do_format(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += print_char(va_arg(args, int));
	else if (format == 's')
		print_len += print_str_or_null(va_arg(args, char *));
	else if (format == 'p')
		print_len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_len += print_nbr(va_arg(args, int));
	else if (format == 'u')
		print_len += print_nbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_len += print_char('%');
	return (print_len);
}
