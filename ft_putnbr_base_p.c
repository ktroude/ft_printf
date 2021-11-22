/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:41:44 by ktroude           #+#    #+#             */
/*   Updated: 2021/11/10 16:24:56 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_p(unsigned long int n)
{
	int		j;
	char	*str;

	str = "0123456789abcdef";
	j = 0;
	if (n >= 16)
	{
		j += ft_putnbr_base_p(n / 16);
		j += ft_putnbr_base_p(n % 16);
	}
	if (n < 16)
			j += write(1, &str[n], 1);
	return (j);
}
