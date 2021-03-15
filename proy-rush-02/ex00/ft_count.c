/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:30:26 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/14 21:13:19 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_count_longest(char *p, int size)
{
	char	*r;
	int		count;
	int		count2;
	int		i;

	i = 0;
	count2 = 0;
	while (i < size - 1)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			count = 0;
			r = &p[i];
			while (*r != '\n' && *r != '\0')
			{
				r++;
				count++;
			}
			if (count > count2)
				count2 = count;
		}
		i++;
	}
	return (count2);
}

int	ft_count_lines(char *str, unsigned int size)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	if (str[i] == '\0' && str[i - 1] != '\n')
		count++;
	return (count);
}
