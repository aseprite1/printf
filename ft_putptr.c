/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:15:07 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/22 19:22:17 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ptr(unsigned long n)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_putnbr_ptr(n / 16);
		len += ft_putnbr_ptr(n % 16);
	}
	else
	{
		if (n < 10)
			len += ft_putchar('0' + n);
		else
			len += ft_putchar('a' + (n - 10));
	}
	return (len);
}

int	ft_putptr(void *p)
{
	return (write(1, "0x", 2) + ft_putnbr_ptr((unsigned long)p));
}
