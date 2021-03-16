#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(8));
}