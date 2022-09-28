/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:35:50 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/22 17:42:01 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_upper(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_putnbr_hex_upper(n / 16);
		len += ft_putnbr_hex_upper(n % 16);
	}
	else
	{
		if (n < 10)
			len += ft_putchar('0' + n);
		else
			len += ft_putchar('A' + (n - 10));
	}
	return (len);
}
