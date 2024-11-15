/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:14:24 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/07 19:53:47 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_search(int c, va_list args)
{
	int	len_count;
	int	va_count;

	va_count = 1;
	len_count = 0;
	if (c == 'c')
		len_count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len_count += ft_string(va_arg(args, char *));
	else if (c == 'p')
		len_count += ft_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		len_count += ft_decimal(va_arg(args, int));
	else if (c == 'u')
		len_count += ft_unsigned_decimal(va_arg(args, unsigned int));
	else if (c == 'x')
		len_count += ft_hexadecimal_low(va_arg(args, unsigned int));
	else if (c == 'X')
		len_count += ft_hexadecimal_uppercase(va_arg(args, unsigned int));
	else if (c == '%')
		len_count += ft_putchar('%');
	return (len_count);
}
