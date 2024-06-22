/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:57:01 by anmateo-          #+#    #+#             */
/*   Updated: 2024/05/21 16:15:45 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	put_hex(intptr_t num, const char charConv)
{
	int	count;

	count = 0;
	if (num >= 16)
	{
		count += put_hex(num / 16, charConv);
		count += put_hex(num % 16, charConv);
	}
	else
	{
		count++;
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + charConv), 1);
	}
	return (count);
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
	{
		if (format == 'x')
			return (put_hex(num, 'a'));
		else if (format == 'X')
			return (put_hex(num, 'A'));
	}
	return (-1);
}

int	ft_print_ptr(intptr_t ptr)
{
	int	print_len;

	if (ptr == 0)
		print_len = write(1, "(nil)", 5);
	else
	{
		print_len = write(1, "0x", 2);
		print_len += put_hex(ptr, 'a');
	}
	return (print_len);
}
