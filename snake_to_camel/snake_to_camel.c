#include <unistd.h>

void	ft_snake_to_camel(char *str)
{
	int	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == '_')
		{
			i++;
			str[i] -= 32;
		}
		write (1, &str[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_snake_to_camel(argv[1]);
	write(1, "\n", 1);
}