/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:02:02 by randrade          #+#    #+#             */
/*   Updated: 2024/05/19 11:46:13 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int	nbr_print; // count number of char printed;

	// CHECK FORMAT, AMOUNT OF '%' == TO VA_ARGS

	nbr_print = 0;
	va_start(ap, str);
	if (!ft_strchr(str, '%'))
	{
		nbr_print += ft_putstr(str);
		va_end(ap);
		return (nbr_print);
	}
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
				nbr_print += ft_putchar(va_arg(ap, int));
			else if (*str == 's')
				nbr_print += ft_putstr(va_arg(ap, char *));
//			else if (*str == 'p')
//				ft_putaddress(va_arg(ap, void *)); //va_arg void *
			else if (*str == 'd')
				nbr_print += ft_putnbr(va_arg(ap, int));
			else if (*str == 'i')
				nbr_print += ft_putnbr(va_arg(ap, int));
//			else if (*str == 'u')
//				ft_putnbr(va_arg(ap, int), "0123456789"); // va_arg int
//			else if (*str == 'x')
//				nbr_print += ft_putnbr(va_arg(ap, int), "0123456789abcdef");
//			else if (*str == 'X')
//				nbr_print += ft_putnbr(va_arg(ap, int), "0123456789ABCDEF");
			else if (*str == '%')
				nbr_print += ft_putchar(*str);
		}
		else 
			nbr_print += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (nbr_print);
}
