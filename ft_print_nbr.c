/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:33:47 by anmateo-          #+#    #+#             */
/*   Updated: 2024/05/01 20:29:39 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

static int	write_nbr_unsigned(unsigned int n, int len)
{
	int		i;
	char	*num_str;

	num_str = (char *)malloc(len * sizeof(char));
	if (num_str == NULL)
		return (-1);
	i = 0;
	while (n != 0)
	{
		num_str[i++] = (n % 10) + '0';
		n /= 10;
	}
	i = len - 1;
	while (i >= 0)
		write(1, &num_str[i--], 1);
	free(num_str);
	return (len);
}

int	print_nbr_unsigned(unsigned int n)
{
	int				len;
	unsigned int	temp;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len = 0;
	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		len++;
	}
	return (write_nbr_unsigned(n, len));
}

int	print_nbr(int n)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = print_str(num);
	free(num);
	return (len);
}
