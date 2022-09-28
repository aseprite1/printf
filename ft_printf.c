/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:29:02 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/22 19:09:19 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *print, ...)
{
	va_list	ap;
	int		len;
	int		va_len;

	len = 0;
	va_start(ap, print);
	while (*print)
	{
		while (*print && *print != '%')
		{
			ft_putchar(*print++);
			len++;
		}
		if (*print)
		{
			va_len = ft_type(*++print, ap);
			if (va_len == -1)
				return (-1);
			len += valen;
			print++;
		}
	}
	va_end(ap);
	return (len);
}
