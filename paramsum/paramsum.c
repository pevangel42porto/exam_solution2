#include <unistd.h>
void	ft_putnbr(int nbr)
{
	char	digit;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;

	ft_putnbr(argc - 1);
	write(1, "\n", 1);
}