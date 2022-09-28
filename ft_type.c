/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:40:24 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/22 19:08:34 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (ft_putnbr_hex(va_arg(ap, unsigned int)));
	else if (c == 'X')
		return (ft_putnbr_hex_upper(va_arg(ap, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}
