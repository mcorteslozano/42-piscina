/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dictionary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaldes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:44:35 by rvaldes-          #+#    #+#             */
/*   Updated: 2021/03/14 21:44:37 by rvaldes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_lib.h"

int		check_dictionary1(char *p)
{
	char *r;

	r = p;
	if (*r < '0' || *r > '9')
	{
		if ((*r == ' ') || (*r >= 9 && *r <= 13))
			return (1);
		else
			return (0);
	}
	return (1);
}

int		check_dictionary2(char *p)
{
	char *r;

	r = p;
	if (*r < 32 || *r > 126)
		return (0);
	else
		return (1);
}

int		check_dictionary_pre(char *p, int lines)
{
	int i;
	int zone;

	i = 0;
	while (i <= lines)
	{
		zone = 0;
		while (*p != '\n' && *p != '\0')
		{
			while (*p != ':' && zone == 0)
			{
				if (check_dictionary1(p) == 0)
					return (0);
				p++;
			}
			zone = 1;
			if (check_dictionary2(p) == 0)
				return (0);
			p++;
		}
		i++;
		p++;
	}
	return (1);
}
