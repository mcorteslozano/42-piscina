#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *puntero;

	puntero = dest;
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return(puntero);

}

int main(void)
{
	char src[] = "Probando strcpy";
	char dest[15];

	printf("%s", ft_strcpy(dest, src));
}
