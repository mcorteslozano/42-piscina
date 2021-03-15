#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int i;

	i = 1;
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb - 1, power));
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_recursive_power(5, 5));
}