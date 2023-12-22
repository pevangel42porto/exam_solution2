#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}
void	ft_putstr(char *str)
{
	int	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
void	ft_fizzbuzz(void)
{
	int	i = 1;
	while(i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			ft_putstr("fizzbuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}

int	main()
{
	ft_fizzbuzz();
}