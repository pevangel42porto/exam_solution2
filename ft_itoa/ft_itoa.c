#include <stdlib.h>

void	ft_putnbr_alocatte(long nbr, char *str, int *i)
{
	if (nbr > 9)
	{
		ft_putnbr_alocatte(nbr / 10, str, i);
		ft_putnbr_alocatte(nbr % 10, str, i);	
	}
	else
		str[(*i)++] = nbr + '0';
	
}
int	count_nbr(long nbr)
{
	int	i = 1;
	while(nbr /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	long nbr = n;
	int	i = 0;
	char *str;

	str = malloc(sizeof(char) * count_nbr(nbr) + 1);
	if (!str)
		return(NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		str[i++] = '-';
	}
	ft_putnbr_alocatte(nbr, str, &i);
	str[i] = '\0';
	return(str);
}
/* 
#include <stdio.h>

int	main()
{
	int number = -2123456789;
	printf("%s", ft_itoa(number));
} */