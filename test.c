#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int	main(void)
{
	char	*str = "Hello World";
	int	nbr = 20;
	int	*ptr = &nbr;

	printf("%p\n", nbr);
	printf("%#x\n", *ptr);
}
