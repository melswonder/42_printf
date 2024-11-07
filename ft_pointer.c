/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:41:48 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/05 13:07:57 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

//通常は64ベースで作られているためはいりきれるようにunsigned longに入れる
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

//通常は64ビットのバイナリ値がメモリアドレスとして使われるため16進数にする。
int	ft_pointer(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
	return (len);
}
