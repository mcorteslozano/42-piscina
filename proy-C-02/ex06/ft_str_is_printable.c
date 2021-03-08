#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;

	while(str[i] != '\0')
	{
		if(str[i] >= 32 || str[i] == 127)
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

	prueba = ft_str_is_printable("óóóóóóó");

	printf("Prueba -> %d\n", prueba);
}
