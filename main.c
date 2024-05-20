/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:22:24 by randrade          #+#    #+#             */
/*   Updated: 2024/05/20 17:57:10 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{       
	int	real;
	int	ft;

	ft_printf("FT_PRINTF\n\n");

	ft_printf("1. NULL : ");
	ft = ft_printf(NULL);
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n");

	ft_printf("2. \"\" : ");
	ft = ft_printf("");
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n");

	ft_printf("3. %% : ");
	ft = ft_printf("%");
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n");

	ft_printf("4. \"Free the duck%%\" : ");
	ft = ft_printf("Free the duck%");
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n");

	ft_printf("5. \(\"%%d\", 1996, 42\) : ");
	ft = ft_printf("%d", 1996, 42);
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("-----------------------------------\n");
	printf("PRINTF\n\n");

	printf("1. NULL : ");
	real = printf("Segmentaion fault");
	printf("\nreturn: %d\n", real);

	printf("\n");

	printf("2. \"\" : ");
	real = printf("");
	printf("\nreturn: %d\n", real);

	printf("\n");

	printf("3. %% : ");
	real = printf("%");
	printf("\nreturn: %d\n", real);

	printf("\n");

	printf("4. \"Free the duck%%\" : ");
	real = printf("Free the duck%");
	printf("\nreturn: %d\n", real);

	printf("\n");

	printf("5. \(\"%%d\", 1996, 42\) : ");
	real = printf("%d", 1996, 42);
	printf("\nreturn: %d\n", real);

	printf("\n");

//	ft_printf("print char: %c %d\n", 'R');
//	ft_printf("print string: %s\n", "Free the duck!");
//	ft_printf("print number: %d\n", 1996);
//	ft_printf("print hexa number lower case: %x\n", -1996);
//	ft_printf("print hexa number upper case: %X\n", -1996);
//	ft_printf("print percentage: %%\n");
/*
	printf("\nMIGUEL MAIN\n\n");
	ft_printf(" %d\n", ft_printf("%d"));
	ft_printf(" %d\n", ft_printf("%d"));
	printf(" %d\n", printf("%d%"));
	printf(" %d\n\n", printf("%d%"));
	
	ft_printf(" %d\n", ft_printf("%"));
	ft_printf(" %d\n", ft_printf("%"));
	printf(" %d\n", printf("%"));
	printf(" %d\n\n", printf("%"));
	
	ft_printf(" %d\n", ft_printf(NULL));
	ft_printf(" %d\n", ft_printf("%d%c", 1, 'a'));
	printf(" %d\n", printf(NULL));
	printf(" %d\n", printf("%d%c", 1, 'a'));
*/
}
