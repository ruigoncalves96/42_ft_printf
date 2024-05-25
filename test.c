#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>

int	main(void)
{
	printf("%d\n", 2147483648);
	printf("%li\n", LONG_MAX);
	printf("%lu\n", ULONG_MAX);
}
