/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:22:24 by randrade          #+#    #+#             */
/*   Updated: 2024/05/19 11:36:39 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{       
	char	*str = "Hello";

	printf("%d -> %p\n", str, str);
	ft_printf("%d -> %p\n", str, str);
	ft_printf("print char: %c %c\n", 'R');
	ft_printf("print string: %s\n", "Free the duck!");
	ft_printf("print number: %d\n", 1996);
	ft_printf("print hexa number lower case: %x\n", 1996);
	ft_printf("print hexa number upper case: %X\n", 1996);
	ft_printf("print percentage: %%\n");
}
