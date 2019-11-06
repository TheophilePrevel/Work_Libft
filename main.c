#include <stdio.h>
#include "libft.h"

int		main(int ac, char **av)
{
	int i;
	char **test;

	i = 0;
	if (ac == 3)
	{
		test = ft_split(av[1], av[2][0]);
		while (test[i])
			printf("%s\n",test[i++]);
	}
	return (0);
}
