/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:10:01 by moboulan          #+#    #+#             */
/*   Updated: 2024/11/09 20:56:06 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	size;
	int	base_len;

	base_len = ft_strlen(base);
	size = 0;
	if (nbr < 0)
	{
		size += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= (unsigned long)base_len)
		size += ft_putnbr_base(nbr / base_len, base);
	size += ft_putchar(base[nbr % base_len]);
	return (size);
}
