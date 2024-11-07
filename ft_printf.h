/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:04:00 by hirwatan          #+#    #+#             */
/*   Updated: 2024/11/06 20:08:40 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_search(int c, va_list args);
int		ft_putchar(char c);
size_t	ft_string(char *args);
int		ft_pointer(void *ptr);
int		ft_decimal(int args);
int		ft_putnbr(int args);
int		ft_unsigned_decimal(unsigned int args);
int		ft_hexadecimal_low(int args);
int		ft_hexadecimal_uppercase(unsigned int args);
int		ft_printf(const char *format, ...);

#endif