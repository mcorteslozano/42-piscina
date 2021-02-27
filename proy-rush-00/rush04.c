/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:08:33 by mcortes-          #+#    #+#             */
/*   Updated: 2021/02/27 14:30:05 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void rush(int v1, int v2){
	char escribeA = 'A';
	char escribeB = 'B';
	char escribeC = 'C';
	char salta = '\n';
	char espacio = ' ';

	char aux1 = v1; // 5
	char aux2 = v2; // 3
	char aux3 = v2; // Auxiliar para conteo de altura
	
	while(v1 > 0){
		if(v1 == 1){
			write(1, &escribeC, 1);
		} else if(v1 != aux1){
			write(1, &escribeB, 1);
		} else {
			write(1, &escribeA, 1);
		}
		v1--;
	}
	aux3--;
	v1 = aux1;
	write(1, &salta, 1);
	
	while(v2-2 > 0){
		v1 = aux1;
		while(v1 > 0){
			if(v1 == 1){
				write(1, &escribeB, 1);
			} else if(v1 != aux1){
				write(1, &espacio, 1);
			} else {
				write(1, &escribeB, 1);
			}
			v1--;
		}
		v2--;
		write(1, &salta, 1);
	}
	
	v1 = aux1;	

	while(v1 > 0){
		if(v1 == 1){
			write(1, &escribeA, 1);
		} else if(v1 != aux1){
			write(1, &escribeB, 1);
		} else {
			write(1, &escribeC, 1);
		}
		v1--;
	}

	write(1, &salta, 1);
}

int main(){
	rush(20,7);
}

