/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:38:06 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/22 19:18:13 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *print, ...);
int	ft_putchar(int c);
int	ft_putnbr_hex(unsigned int n);
int	ft_putnbr(int n);
int	ft_putptr(void *p);
int	ft_putstr(char *s);
int	ft_putnbr_hex_upper(unsigned int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_strlen(const char *s);
int	ft_type(char c, va_list ap);

#endif