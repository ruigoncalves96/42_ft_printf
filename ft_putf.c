/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:06:22 by randrade          #+#    #+#             */
/*   Updated: 2024/05/17 17:03:08 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putaddress(void *addr)
{
}

int	ft_putnbr(int nbr, char *base)
{
	int	base_len;
	long	nbr_long;

	base_len = ft_strlen(base);
	nbr_long = nbr;
	if (nbr_long < 0)
	{
		nbr_long *= -1;
		write(1, "-", 1);
	}
	if (nbr_long >= 1)
	{
		ft_putnbr(nbr_long / base_len, base);
		write(1, &base[nbr_long % base_len], 1);
	}
}
