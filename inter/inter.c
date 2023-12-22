#include <unistd.h>

int	ft_is_firts(char *str, char c,  int pos)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
			break;
		i++;
	}

	if (i == pos)
		return(1);
	else
		return(0);
}

int	ft_search(char *str, char c)
{
	int	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return(0);
}
void	ft_inter(char *s1, char *s2)
{
	int	i = 0;

	while(s1[i] != '\0')
	{
		if (ft_is_firts(s1, s1[i], i) && ft_search(s2, s1[i]))
			write(1, &s1[i], 1);
		i++;

	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	}