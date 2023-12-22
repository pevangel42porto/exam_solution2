char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/* 
#include <stdio.h>

int	main()
{
	char examle[] = "Ceci permet de decouvrir le fonctionnement de ton ft_strcpy.";
	char my_cpy[] = "";

	printf("%s", ft_strcpy(my_cpy, examle));
} */