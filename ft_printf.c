/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:02:02 by randrade          #+#    #+#             */
/*   Updated: 2024/05/21 16:13:06 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char c, va_list *ap)
{
	size_t		nbr_print;

	nbr_print = 0;
	if (c == 'c')
		nbr_print += ft_putchar(va_arg(*ap, int));
	else if (c == 's')
		nbr_print += ft_putstr(va_arg(*ap, char *));
	else if (c == 'p')
		nbr_print += ft_putaddress((unsigned long)(va_arg(*ap, void *)));
	else if (c == 'd' || c == 'i')
		nbr_print += ft_putnbr(va_arg(*ap, int));
	else if (c == 'u')
		nbr_print += ft_putnbr(va_arg(*ap, unsigned int));
	else if (c == 'x')
		nbr_print += ft_putnbr_hex(va_arg(*ap, unsigned int), 'l');
	else if (c == 'X')
		nbr_print += ft_putnbr_hex(va_arg(*ap, unsigned int), 'U');
	else if (c == '%')
		nbr_print += ft_putchar(c);
	else
	{
		nbr_print += ft_putchar('%');
		nbr_print += ft_putchar(c);
	}
	return (nbr_print);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t		nbr_print;

	va_start(ap, str);
	if (str == NULL)
		return (-1);
	nbr_print = 0;
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
			if (!*str)
			{
				va_end(ap);
				return (-1);
			}
			nbr_print += print_format(*str, &ap);
		}
		else
			nbr_print += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (nbr_print);
}
