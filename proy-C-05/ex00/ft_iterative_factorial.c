#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int aux;

	i = 1;
	aux = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		aux = aux * i;
		i++;
	}
	return (aux);
}

int		main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
}