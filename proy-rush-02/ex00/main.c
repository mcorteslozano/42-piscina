/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:31:16 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/14 21:34:25 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_lib.h"

void	ft_princ(char *p, int size, char *numb)
{
	long	*t;
	char	**k;
	char	**name_tab;
	int		i;
	long	l;

	l = ft_atoi(numb);
	if (l > 4294967295)
	{
		ft_print("Error. You have entered an invalid value. ");
	}
	else
	{
		i = 0;
		name_tab = new_tab(p, size);
		t = ft_find_numbers(p, size);
		k = ft_find_names(p, name_tab);
		ft_assignation(l, t, k, ft_count_lines(p, size));
	}
}

int	main(int count, char *argv[])
{
	char			*p;
	unsigned int	size;
	int				fd;
	size_t			td;
	int				i;

	fd = 0;
	if (count == 1)
	{
		ft_print("Error: you must enter at least one value (number).\n");
		return (0);
	} else if (count == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
			{
				ft_print("Error.\n");
				return (0);
			}
			i++;
		}
		p = (char *)malloc(65535);
		fd = open("numbers.dict", O_RDONLY);
		if (fd == -1)
		{
			ft_print("File opening error. Does it exist?.\n");
			return (0);
		}
		td = 65535;
		size = read(fd, p, td);
		p[size] = '\0';
		ft_princ(p, size, argv[1]);
		free(p);
	}
	if (count == 3)
	{
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (argv[2][i] < '0' || argv[2][i] > '9')
			{
				ft_print("Error. You cannot enter letters.\n");
				return (0);
			}
			i++;
		}
		p = (char *)malloc(65535);
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_print("File opening error. Does it exist?.\n");
			return (0);
		}
		td = 65535;
		size = read(fd, p, td);
		p[size] = '\0';
		ft_princ(p, size, argv[2]);
		free(p);
	} else if (count > 3)
	{
		ft_print("Error. You cannot enter more than two values.\n");
		return (0);
	}
	close(fd);
	return (0);
}
