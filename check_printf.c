/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:01:07 by ktroude           #+#    #+#             */
/*   Updated: 2021/11/09 16:04:33 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_printf(int i, const char *str, va_list args)
{
	if (str[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str[i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (str[i] == 'p')
	{
		write (1, "0x", 2);
		return (2 + ft_putnbr_base_p(va_arg(args, unsigned long int)));
	}
	if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str[i] == 'u')
		return (ft_putnbr_uns(va_arg(args, int)));
	if (str[i] == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), 0));
	if (str[i] == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), 1));
	if (str[i] == '%')
		return (ft_putchar('%'));
	return (0);
}
