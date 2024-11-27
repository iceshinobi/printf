/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuyoshi <tokuyoshi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 00:39:07 by tokuyoshi         #+#    #+#             */
/*   Updated: 2024/11/27 20:15:17 by tokuyoshi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	check_type(const char *format, va_list args)
{
	int	prin;

	prin = 0;
	if (*format == 'c')
		prin += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		prin += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		prin += ft_putptr(va_arg(args, unsigned long), HEXADECIMAL_BASE);
	else if (*format == 'd' || *format == 'i')
		prin += ft_putnbr(va_arg(args, int), DECIMAL_BASE);
	else if (*format == 'u')
		prin += ft_putnbr(va_arg(args, unsigned int), DECIMAL_BASE);
	else if (*format == 'x')
		prin += ft_putnbr(va_arg(args, unsigned int), HEXADECIMAL_BASE);
	else if (*format == 'X')
		prin += ft_putnbr(va_arg(args, unsigned int), UPPER_HEXADECIMAL_BASE);
	else if (*format == '%')
		prin += ft_putchar('%');
	return (prin);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	if (!format)
		return (-1);
	len = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len += check_type(format, args);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
