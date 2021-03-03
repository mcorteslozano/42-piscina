/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:14:56 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/03 20:41:21 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int aux;
	int i;
	int tam;

	tam = size - 1;
	while(i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[tam];
		tab[tam] = aux;
		i++;
		tam--;
	}
}
