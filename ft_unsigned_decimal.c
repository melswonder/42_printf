/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:42:40 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/06 20:17:39 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_unsigned_putnbr(unsigned int args)
{
	int		len;
	char	c;

	len = 0;
	if (args >= 10)
		len += ft_unsigned_putnbr(args / 10);
	c = (args % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}

int	ft_unsigned_decimal(unsigned int args)
{
	int		len;
	char	c;

	len = 0;
	if (args == 0)
	{
		c = '0';
		return (write(1, &c, 1));
	}
	if (!args)
		return (write(1, "(nil)", 1));
	len += ft_unsigned_putnbr((unsigned int)args);
	return (len);
}
