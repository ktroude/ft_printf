/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:33:48 by ktroude           #+#    #+#             */
/*   Updated: 2021/11/09 16:04:41 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	check_printf(int i, const char *str, va_list args);
int	ft_printf(const char *str, ...);
int	ft_putnbr_base(unsigned int n, int a);
int	ft_putnbr_uns(unsigned int n);
int	ft_putnbr_base_p(unsigned long int n);

#endif
