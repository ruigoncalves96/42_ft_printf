/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:06:22 by randrade          #+#    #+#             */
/*   Updated: 2024/05/19 11:51:24 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
/*
int	ft_putaddress(int addr)
{
	int	nbr_len;

	nbr_len = 0;
	nbr_len += ft_putstr("0x");
	nbr_len += ft_putnbr(addr, "0123456789abcdef");

	return (nbr_len);
}
*/
int	ft_putnbr(int nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			nbr_len += ft_putstr("-2147483648");
			return (nbr_len);
		}
		nbr *= -1;
		nbr_len += ft_putchar('-');
	}
	if (nbr < 10)
	{
		nbr_len += ft_putchar(nbr + 48);
		return (nbr_len);
	}
	else
	{
		nbr_len += ft_putnbr(nbr / 10);
		nbr_len += ft_putnbr(nbr % 10);
	}
	return (nbr_len);
}
