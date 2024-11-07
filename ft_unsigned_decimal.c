/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:42:40 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/05 13:25:56 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_putnbr(unsigned long nbr)
{
	int		len;
	char	c;

	len = 0;
	if (nbr >= 10)
		len += ft_putnbr(nbr / 10);
	c = nbr % 10;
	len += write(1, &c, 1);
	return (len);
}

int	ft_unsigned_decimal(unsigned int args)
{
	int len;

	len = 0;
	if (!args)
		return (write(1, "(nil)", 1));
	len += ft_putnbr((unsigned long)args);
	return (len);
}