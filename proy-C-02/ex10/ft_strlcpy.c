/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:22:27 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/08 20:27:56 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int tam;

	i = 0;
	tam = size - 1;
	if(size > 0)
	{
		while(tam > 0 && src[i] != '\0')
		{
			dest[i] = src[i];
			tam--;
			i++;
		}
	} else {
		dest[i] = '\0';
	}

	i = 0;
	while(src[i])
	{
		i++;
	}

	printf("Destino: %s\n", dest);
	
	return(i);

}

int main(void)
{
	char destino[6];
	char origen[] = "Probando...";

	printf("Origen: %s\n", origen);
	printf("Longitud de origen: %d\n", ft_strlcpy(destino, origen, 4));
	return (0);
}
