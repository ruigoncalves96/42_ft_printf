/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:02:02 by randrade          #+#    #+#             */
/*   Updated: 2024/05/17 17:42:23 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int	print_nbr; // count number of char printed;

	va_start(ap, str);
	if (!ft_strchr(str, '%'))
	{
		ft_putstr(str);
		va_end(ap);
		return (print_nbr);
	}
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
				ft_putchar(va_arg(ap, char)); //va_arg char
			else if (*str == 's')
				ft_putstr(va_arg(ap, char *)); //va_arg char *
//			else if (*str == 'p')
//				ft_putaddress(va_arg(ap, void *)); //va_arg void *
			else if (*str == 'd')
				ft_putnbr(va_arg(ap, int), "0123456789"); // va_arg int
			else if (*str == 'i')
				ft_putnbr(va_arg(ap, int), "0123456789"); // va_arg int
			else if (*str == 'u')
				ft_putnbr(va_arg(ap, int), "0123456789"); // va_arg int
			else if (*str == 'x')
				ft_putnbr(va_arg(ap, int), "0123456789abcdef"); // va_arg int
			else if (*str == 'X')
				ft_putnbr(va_arg(ap, int), "0123456789ABCDEF"); // va_arg int
			else if (*str == '%')
				ft_putchar(*str); // va_arg char 
		}
		else 
			ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (print_nbr);
}

int	main(void)
{
	ft_printf("print char: %c %c\n", 'R', 'u');
	ft_printf("print string: %s\n", "Free the duck!");
	ft_printf("print number: %d\n", 1996);
	ft_printf("print hexa number lower case: %x\n", 1996);
	ft_printf("print hexa number upper case: %X\n", 1996);
	ft_printf("print percentage: %%\n");
}
