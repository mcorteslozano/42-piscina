#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	return (str);
}

int main()
{
	char prueba[] = "asdasdad";
	ft_strlowcase(&prueba[0]);
}

