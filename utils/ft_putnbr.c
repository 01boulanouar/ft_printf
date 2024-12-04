/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:10:01 by moboulan          #+#    #+#             */
/*   Updated: 2024/11/09 20:18:08 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(unsigned long nbr)
{
	int	size;

	size = 0;
	if ((long)nbr < 0)
	{
		size += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		size += ft_putnbr(nbr / 10);
	size += ft_putchar((nbr % 10) + '0');
	return (size);
}
