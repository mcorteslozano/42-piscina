/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:25:48 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/03 20:30:01 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int j;

	temp = 0;
	i = 0;
	j = 0;
	while(i < size)
	{
		while(j + 1 < size)
		{
			if(*tab[i] > *tab[j])
			{
				temp = *tab[i];
				*tab[i] = *tab[j];
				*tab[j] = temp;
			}
		}
	}
}

