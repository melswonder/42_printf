/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:03:05 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/06 20:08:07 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	final_len;

	i = 0;
	final_len = 0;
	va_start(args, format); // 可変長引数リストの初期化
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			final_len += ft_search(format[i], args);
		}
		else
			final_len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (final_len);
}
