#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
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

	prueba = ft_str_is_lowercase("sada___!!");

	printf("Prueba -> %d\n", prueba);
}
