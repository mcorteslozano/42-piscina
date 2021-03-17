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

void    ft_getObs(char *mapa_str)
{
    int    mapa_obs[50];
    int     i;

    i = 0;
    while(mapa_str[i] != '\0')
    {
        if(mapa_str[i] == 'o')
        {
            mapa_obs[i] = i;
            write(1, &mapa_obs[i], 1);
        }
        i++;
    }
}

void    ft_getMap(char *mapa_str)
{
    int     i;

    i = 0;
    while(mapa_str[i] != '\0')
    {
        write(1, &mapa_str[i], 1);
        i++;
    }
}

int    ft_inicio_fichero()
{
    char	textfiles;
    char    mapa_str[100];
    int     f;
    int     cont;
    int     numbytes;

    cont = 0;
	f = open("mapa", O_RDONLY);
    while ((numbytes = read(f, &textfiles, 1)) > 0 && textfiles != '\0')
    {
        mapa_str[cont] = textfiles;
        cont++;
    }
    close(f);

    ft_getMap(mapa_str);
    ft_getObs(mapa_str);
    return (cont);
}

int main()
{
    printf("Número total de bytes: %d", ft_inicio_fichero());
}
