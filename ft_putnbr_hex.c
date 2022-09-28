/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:32:36 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/22 16:21:03 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_putnbr_hex(n / 16);
		len += ft_putnbr_hex(n % 16);
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
