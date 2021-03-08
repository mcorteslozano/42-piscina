#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
			j = 1;
		else
			return (0);
		i++;
	}
	return (j);
}

int main(void)
{
	int prueba;

	prueba = ft_str_is_numeric("131sdadasaa23");

	printf("Prueba -> %d\n", prueba);
}
