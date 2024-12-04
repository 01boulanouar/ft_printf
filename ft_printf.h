/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:19:23 by moboulan          #+#    #+#             */
/*   Updated: 2024/11/09 20:17:38 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_strlen(char *str);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(unsigned long nbr);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_printf(const char *format, ...);

#endif