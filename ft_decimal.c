/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:42:09 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/05 12:21:44 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_decimal(int args)
{
	int		len;
	char	c;

	len = 0;
	if (args >= 10)
		len += ft_decimal(args / 10);
	c = args % 10;
	len += write(1, &c, 1);
	return (len);
}
