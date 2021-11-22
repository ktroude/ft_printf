/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:53:46 by ktroude           #+#    #+#             */
/*   Updated: 2021/11/05 15:27:57 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uns(unsigned int n)
{
	int		j;
	char	c;

	j = 0;
	if (n > 9)
	{
		j += ft_putnbr_uns(n / 10);
		j += ft_putnbr_uns(n % 10);
	}
	if (n < 10)
	{
		c = n + 48;
		ft_putchar(c);
		j++;
	}
	return (j);
}
