int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return(0);
	while (n % 2 == 0)
		n /= 2;
	return (n == 1);	
}
/* #include <stdio.h>
int	main()
{
	int	nbr = 0;

	if (is_power_of_2(nbr))
		printf("e potencia de 2");
} */