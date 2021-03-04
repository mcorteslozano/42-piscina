/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:59:28 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/03 20:42:42 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int aux;
	
	aux = *a;
	*a = *a / *b;
	*b = aux % *b;
	
	printf("El resultado de *a es...: %d", *a);
	printf("\nEl resultado de *b es...: %d", *b);
}

int main(){
	int v1;
	int v2;

	v1 = 6;
	v2 = 3;
	ft_ultimate_div_mod(&v1, &v2);
}
