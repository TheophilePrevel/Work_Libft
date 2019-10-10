#include "libft.h"

int		main(int ac, char **av)
{
	(void)ac;
	ft_putnbr_fd(ft_atoi(av[1]), 1);
	return (0);
}
