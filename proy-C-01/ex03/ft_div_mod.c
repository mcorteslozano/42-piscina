/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:55:46 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/03 19:57:42 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	
	printf("El valor de div es...: %d", *div);
	printf("\nEl valor de mod es...: %d", *mod);
}

int main(){
	int v1;
	int v2;
	int div;
	int mod;

	v1 = 6;
	v2 = 3;
	div = 0;
	mod = 0;
	ft_div_mod(v1, v2, &div, &mod);
}
