#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	i = 42;
	char	str[] = "kakkaa";
	int	num = INT_MIN;

	printf("Essa é a original:\n %c\nksja\n %d\n %s\n %p\n %i\n %u\n %x\n %%\n %X\n", 'c', i, str, str, num, i, 42, 42);

	ft_printf("Essa é a ft:\n %c\nksja\n %d\n %s\n %p\n %i\n %u\n %x\n %%\n %X\n", 'c', i, str, str, num, i, 42, 42);
	return (0);
}
