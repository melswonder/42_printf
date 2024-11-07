/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:44:15 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/05 12:56:59 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int		len;
	char	c;

	len = 0;
	if (nbr >= 16)
		len += ft_putnbr_base(nbr / 16, base);
	c = nbr % 16;
	len += write(1, &c, 1);
	return (len);
}

int	ft_hexadecimal_low(int args)
{
	int len;

	len = 0;
	if (!args)
		return (write(1, "(nil)", 5));
	len += ft_putnbr_base((unsigned long)args, "0123456789abcdef");
	return (len);
}