#include <stdio.h>
#include "libft.h"

void	ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}
