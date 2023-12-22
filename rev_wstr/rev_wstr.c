#include <unistd.h>
#include <stdlib.h>


void	ft_revwstr(char *str, int first)
{
	int	i = 0;
	int start;

	if (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (!str[i])
			return ;
		start = i;
		while(str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		ft_revwstr(&str[i], 0);
		write(1, &str[start], i - start);
		if (!first)
			write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_revwstr(argv[1], 1);
	write(1, "\n", 1);
}