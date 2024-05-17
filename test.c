#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*str = "Free the duck!\n";
	int	nbr = 1000;
	void	*ptr = &nbr;

	printf("test % k\n", ptr);
	printf("%%\n", &nbr);
}
