#include <stdio.h>
#include "libft.h"

char		*ft_itoa(int n);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
	printf("%s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}
