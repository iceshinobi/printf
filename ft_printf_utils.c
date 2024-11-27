/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuyoshi <tokuyoshi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:51:45 by tokuyoshi         #+#    #+#             */
/*   Updated: 2024/11/27 20:15:13 by tokuyoshi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	unsigned int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(long int nbr, char *base)
{
	int	printed;
	int	len_base;

	printed = 0;
	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		printed += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= len_base)
		printed += ft_putnbr(nbr / len_base, base);
	printed += ft_putchar(base[nbr % len_base]);
	return (printed);
}

int	ft_putptr(unsigned long ptr, char *base)
{
	int	printed;
	int	len_base;

	printed = 0;
	len_base = ft_strlen(base);
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	if (ptr >= (unsigned long)len_base)
		printed += ft_putptr(ptr / len_base, base);
	else
		printed += ft_putstr("0x");
	printed += ft_putchar(base[ptr % len_base]);
	return (printed);
}
