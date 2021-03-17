/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpavon-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:59:27 by dpavon-g          #+#    #+#             */
/*   Updated: 2021/03/16 12:59:28 by dpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
#include "ft_lib.h"

int ft_atoi(char *cadena)
{
    int i;
    char numeros[10];
    int num;
    i = 0;
    num = 0;
    while (cadena[i] >= '0' && cadena[i] <= '9')
    {
        num = num * 10 + cadena[i] - 48;
        i++;
    }
    numeros[i] = '\0';
    return(num);
}

char    *ft_inicio_fichero(char *file)
{
    unsigned int	first_bytes;
	unsigned int	map_size;
	int				fd;
	char			*map;

	map = (char *)malloc(65535);
	first_bytes = 1;
	fd = open(file, O_RDONLY);
	while (first_bytes != '\n')
	{
		map_size = read(fd, map, first_bytes++);
	}
	if (fd == -1)
    {
		printf("Error de apertura\n");
        return (0);
    }
	
	close(fd);
	return (map);
}

int main(int argc, char **argv)
{
    char	*mapa;

	if (argc > 1)
	{
		mapa = ft_inicio_fichero(argv[1]);
		printf("%s\n", mapa);
	}
	return (0);
}