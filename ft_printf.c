/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:29:10 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/04 11:39:06 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int static	handle_format(const char *s, va_list args)
{
	if (*s == '%')
		return (ft_putchar('%'));
	else if (*s == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*s == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*s == 'p')
		return (ft_putstr("0x") + ft_putnbr_base(va_arg(args, unsigned long),
				"0123456789abcdef"));
	else if (*s == 'd' || *s == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*s == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (*s == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (*s == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else
		return (ft_putchar(*s));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		size;
	va_list	args;

	if (write(1, "", 0))
		return (-1);
	va_start(args, s);
	size = 0;
	while (*s)
	{
		if (*s == '%' && *(s + 1))
			size += handle_format(++s, args);
		else if (*s != '%')
			size += ft_putchar(*s);
		s++;
	}
	va_end(args);
	return (size);
}
