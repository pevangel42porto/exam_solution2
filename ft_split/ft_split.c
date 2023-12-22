#include <stdlib.h>

int	count_word(char *str)
{
	int	i = 0;
	int	count = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				i++;
			count++;
		}
	}
	return (count);
}

int	word_len(char *str, int i)
{
	int	count = 0;
	while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		count++;
		i++;
	}
	return(count);
}

char	**ft_split(char *str)
{
	int	i = 0;
	int j = 0;
	int k;
	char **tab;

	if (!(tab = malloc(sizeof(char *) * (count_word(str) + 1))))
		return(NULL);
	while (str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
		{
			k = 0;
			if (!(tab[j] = malloc(sizeof(char) * word_len(str, i) + 1)))
				return(NULL);
			while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return(tab);
}
/* 
#include <stdio.h>

int	main()
{
	int	i = 0;
	char **tab;

	tab = ft_split("Ola o meu nome e pedro");
	while(i < 6)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
} */