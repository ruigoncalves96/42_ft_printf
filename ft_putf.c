/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:06:22 by randrade          #+#    #+#             */
/*   Updated: 2024/05/20 15:39:07 by randrade         ###   ########.fr       */
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

int	ft_putaddress(unsigned long addr)
{
	int	nbr_len;

	nbr_len = 0;
	nbr_len += ft_putstr("0x");
	nbr_len += ft_putnbr_hex(addr, "0123456789abcdef");
	return (nbr_len);
}

int	ft_putnbr(long nbr)
{
	int	nbr_len;

	nbr_len = ft_nbrlen(nbr);
	if (nbr < 0)
	{
		if (nbr == -2147483648)
			return (ft_putstr("-2147483648"));
		nbr *= -1;
		nbr_len += ft_putchar('-');
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + 48);
		return (nbr_len);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	return (nbr_len);
}

int	ft_putnbr_hex(unsigned long nbr, char *base)
{
	size_t	base_len;
	size_t	nbr_len;

	base_len = ft_strlen(base);
	nbr_len = 0;
	if (nbr < base_len)
	{
		nbr_len += ft_putchar(nbr[base]);
		return (nbr_len);
	}
	else
	{
		nbr_len += ft_putnbr_hex(nbr / base_len, base);
		nbr_len += ft_putnbr_hex(nbr % base_len, base);
	}
	return (nbr_len);
}
