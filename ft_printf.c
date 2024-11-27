/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuyoshi <tokuyoshi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:39:07 by tokuyoshi         #+#    #+#             */
/*   Updated: 2024/11/26 21:45:54 by tokuyoshi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	check_type(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		i += ft_putptr(va_arg(args, unsigned long), HEXADECIMAL_BASE);
	else if (*format == 'd' || *format == 'i')
		i += ft_putnbr(va_arg(args, int), DECIMAL_BASE);
	else if (*format == 'u')
		i += ft_putnbr(va_arg(args, unsigned int), DECIMAL_BASE);
	else if (*format == 'x')
		i += ft_putnbr(va_args(args, unsigned int), HEXADECIMAL_BASE);
	else if (*format == 'X')
		i += ft_putnbr(va_args(args, unsigned int), UPPER_HEXADECIMAL_BASE);
	else if (*format == '%')
		i += ft_printchar('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;

	if (!format)
}
