/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:35:46 by ktroude           #+#    #+#             */
/*   Updated: 2021/11/09 16:02:43 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		j;
	int		i;
	va_list	args;

	j = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			j++;
		}	
		if (str[i] == '%')
		{
			i++;
			j += check_printf(i, str, args);
		}
		i++;
	}
	va_end(args);
	return (j);
}

/*
int main()
{
	ft_printf("%d\n", -435463135356436843);
}
*/
