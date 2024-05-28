/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:22:24 by randrade          #+#    #+#             */
/*   Updated: 2024/05/28 16:24:30 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{       
	int	real;
	int	ft;

	ft_printf("FT_PRINTF\n\n");

	ft_printf("Random Cases\n\n");

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

	ft_printf("\n");

	ft_printf("6. \(\"%%d%%d\", 1996\) : ");
	ft = ft_printf("%d%d", 1996);
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n%%c Cases\n\n");

	ft_printf("7. a : ");
	ft = ft_printf("%c", 'a');
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n%%s Cases\n\n");

	ft_printf("8. Free the duck! : ");
	ft = ft_printf("%s", "Free the duck!");
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n%%p Cases\n\n");

	ft_printf("9. ft : ");
	ft = ft_printf("%p", &ft);
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n%%d/i Cases\n\n");

	ft_printf("10. INT_MIN 0 INT_MAX : ");
	ft = ft_printf("%d %d %d", INT_MIN, 0, INT_MAX);
	ft_printf("\nreturn: %d\n\n", ft);

	ft_printf("11. INT_MIN 0 INT_MAX : ");
	ft = ft_printf("%i %i %i", INT_MIN, 0, INT_MAX);
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n%%u Cases\n\n");

	ft_printf("12. 0 UINT_MAX : ");
	ft = ft_printf("%u %u", 0, UINT_MAX);
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n%%x Cases\n\n");

	ft_printf("13. -1996 0 1996 : ");
	ft = ft_printf("%x %x %x", -1996, 0, 1996);
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\n%%X Cases\n\n");

	ft_printf("14. -1996 0 1996 : ");
	ft = ft_printf("%X %X %X", -1996, 0, 1996);
	ft_printf("\nreturn: %d\n", ft);

	ft_printf("\nOdd Case\n\n");

	ft_printf("15. Free the %v duck : ");
	ft = ft_printf("Free the %v duck");
	ft_printf("\nreturn: %d\n\n", ft);

	ft_printf("-----------------------------------\n");
	printf("PRINTF\n\n");

	printf("Random Cases\n\n");

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

	printf("6. \(\"%%d%%d\", 1996\) : ");
	real = printf("%d%d", 1996);
	printf("\nreturn: %d\n", real);

	printf("\n%%c Cases\n\n");

	printf("7. a : ");
	real = printf("%c", 'a');
	printf("\nreturn: %d\n", real);

	ft_printf("\n%%s Cases\n\n");

	printf("8. Free the duck! : ");
	real = printf("%s", "Free the duck!");
	printf("\nreturn: %d\n", real);

	printf("\n%%p Cases\n\n");

	printf("9. ft : ");
	real = printf("%p", &ft);
	printf("\nreturn: %d\n", real);

	printf("\n%%d/i Cases\n\n");

	printf("10. INT_MIN 0 INT_MAX : ");
	real = printf("%d %d %d", INT_MIN, 0, INT_MAX);
	printf("\nreturn: %d\n\n", real);

	printf("11. INT_MIN 0 INT_MAX : ");
	real = printf("%i %i %i", INT_MIN, 0, INT_MAX);
	printf("\nreturn: %d\n", real);
	
	printf("\n%%u Cases\n\n");

	printf("12. 0 UINT_MAX : ");
	real = printf("%u %u", 0, UINT_MAX);
	printf("\nreturn: %u\n", real);

	printf("\n%%x Cases\n\n");

	printf("13. -1996 0 1996 : ");
	real = printf("%x %x %x", -1996, 0, 1996);
	printf("\nreturn: %d\n", real);

	printf("\n%%X Cases\n\n");

	printf("14. -1996 0 1996 : ");
	real = printf("%X %X %X", -1996, 0, 1996);
	printf("\nreturn: %d\n", real);

	printf("\nOdd Case\n\n");

	printf("15. Free the %v duck : ");
	real = printf("Free the %v duck");
	printf("\nreturn: %d\n", real);

	return (0);
}
