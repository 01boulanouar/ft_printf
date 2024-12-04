/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:45:51 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/04 14:36:09 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	size;

	size = 0;
	if (s == NULL)
		s = "(null)";
	while (*s)
		size += ft_putchar(*s++);
	return (size);
}
