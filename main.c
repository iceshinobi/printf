#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	i = 42;
	char	str[] = "kakkaa";

	printf("Essa é a original:\n %c\nksja\n %d\n %s\n %p\n %i\n %u\n %x\n %%\n %X\n", 'c', i, str, str, i, i, 42, 42);

	ft_printf("Essa é a ft:\n %c\nksja\n %d\n %s\n %p\n %i\n %u\n %x\n %%\n %X\n", 'c', i, str, str, i, i, 42, 42);
	return (0);
}
