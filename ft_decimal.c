/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:42:09 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/07 19:17:08 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_putnbr(int args)
{
	int			len;
	long long	nb;
	char		c;

	len = 0;
	nb = (long long)args;
	if (nb < 0)
	{
		len += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}

int	ft_decimal(int args)
{
	int		len;
	char	c;

	len = 0;
	if (args == 0)
	{
		c = '0';
		return (write(1, &c, 1));
	}
	len = ft_putnbr(args);
	return (len);
}
