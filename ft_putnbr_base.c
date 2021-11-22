/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:17:27 by ktroude           #+#    #+#             */
/*   Updated: 2021/11/10 16:24:13 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int n, int a)
{
	int		j;
	char	*str;

	n = (long)n;
	if (a == 0)
		str = "0123456789abcdef";
	if (a != 0)
		str = "0123456789ABCDEF";
	j = 0;
	if (n >= 16)
	{
		j += ft_putnbr_base(n / 16, a);
		j += ft_putnbr_base(n % 16, a);
	}
	if (n < 16)
		j += write(1, &str[n], 1);
	return (j);
}
