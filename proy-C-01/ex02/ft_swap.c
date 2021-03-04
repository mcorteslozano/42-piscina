/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:53:50 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/03 19:55:17 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	char aux;

	aux = *a;
	*a = *b;
	*b = aux;
	
	printf("El valor de A es...: %d", *a);
}

int main(){
	int v1;
	int v2;

	v1 = 2;
	v2 = 4;
	ft_swap(&v1, &v2);
}
	
