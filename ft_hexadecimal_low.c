/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:44:15 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/07 19:15:33 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	ft_putnbr_base_l(unsigned int nbr, char *base)
{
	int		len;
	char	c;

	len = 0;
	if (nbr >= 16)
		len += ft_putnbr_base_l(nbr / 16, base);
	c = base[nbr % 16];
	len += write(1, &c, 1);
	return (len);
}

int	ft_hexadecimal_low(int args)
{
	int		len;
	char	c;

	len = 0;
	if (args == 0)
	{
		c = '0';
		return (write(1, &c, 1));
	}
	len += ft_putnbr_base_l((unsigned int)args, "0123456789abcdef");
	return (len);
}
