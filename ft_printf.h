/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:02:42 by anmateo-          #+#    #+#             */
/*   Updated: 2024/05/01 20:25:45 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	put_hex(intptr_t num, const char charConv);
int	ft_print_hex(unsigned int num, const char format);
int	ft_print_ptr(intptr_t ptr);
int	print_char(char c);
int	print_str_or_null(char *str);
int	print_str(char *str);
int	print_nbr_unsigned(unsigned int n);
int	print_nbr(int n);
int	ft_printf(char const *str, ...);
int	do_format(va_list args, const char format);

#endif
