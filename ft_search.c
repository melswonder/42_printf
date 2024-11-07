/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loremipsum <loremipsum@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:14:24 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/06 09:41:12 by loremipsum       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int ft_search(const char *format, int i, va_list args)
{
	int	len_count;

	len_count = 0;
	if (format[i] == 'c')
		len_count += ft_putchar(va_arg(args, int));
	else if (format[i] == 's')
		len_count += ft_string(va_arg(args, char *));
	else if (format[i] == 'p')
		len_count += ft_pointer(va_arg(args, void *));
	else if (format[i] == 'd')
		len_count += ft_decimal(va_arg(args, int));
	else if (format[i] == 'i')
		len_count += ft_decimal(va_arg(args, int));
	else if (format[i] == 'u')
		len_count += ft_unsigned_decimal(va_arg(args, unsigned int));
	else if (format[i] == 'x')
		len_count += ft_hexadecimal_low(va_arg(args, unsigned int));
	else if (format[i] == 'X')
		len_count += ft_hexadecimal_uppercase(va_arg(args, unsigned int));
	else if (format[i] == '%')
		len_count += ft_putchar('%');
	return (len_count);
}
