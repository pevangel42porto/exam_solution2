#include <stdlib.h>

int	absolute_nbr(int n)
{
	if (n < 0)
		return(-n);
	return(n);
}

int	*ft_rrange(int start, int end)
{
	int	numbers_of_int;
	int	step;
	int	i = 0;
	int	*array;

	numbers_of_int = 1 + absolute_nbr(start - end);
	array = malloc(sizeof(int) * numbers_of_int);
	if (start > end)
		step = 1;
	else
		step = -1;
	while(i < numbers_of_int)
	{
		array[i] = end;
		end = end + step;
		i++;
	}
	return(array);
}
/* 
#include <stdio.h>
int	main()
{
	int start = -1;
	int end = 2;
	int i = 0;
	int *ary = ft_rrange(start, end);

	while(i < 1 + absolute_nbr(start - end))
	{
		printf("%d", ary[i]);
		i++;
	}

} */