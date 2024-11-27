/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuyoshi <tokuyoshi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:47:35 by tokuyoshi         #+#    #+#             */
/*   Updated: 2024/11/26 18:45:16 by tokuyoshi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

# define DECIMAL_BASE "0123456789"
# define HEXADECIMAL_BASE "0123456789abcdef"
# define UPPER_HEXADECIMAL_BASE "0123456789ABCDEF"

int	ft_printf(const char *format, ...);

#endif