/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:05:11 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/06 14:17:32 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_table(char col_up[], char col_down[], char row_left[], char row_right[])
{
	char datos[4][4];
	int i, j;
	
	i = 0;
	j = 0;

	// Rellenando array bidimensional
	while(i < 3)
	{
		while(j < 3)
		{	
			if(i == 0)
			{
				if(row_left[i] == '4')
				{
					datos[0][0] = 1;
					datos[0][1] = 2;
					datos[0][2] = 3;
					datos[0][3] = 4;
				} else if(row_left[i] == '3')
				{
					datos[1][0] = 2;
					datos[1][1] = 3;
					datos[1][2] = 4;
					datos[1][3] = 1;
				} else if(row_left[i] == '2')
				{
					datos[2][0] = 3;
					datos[2][1] = 4;
					datos[2][2] = 1;
					datos[2][3] = 2;
				} else if(row_left[i] == '1')
				{
					datos[3][0] = 4;
					datos[3][1] = 1;
					datos[3][2] = 2;
					datos[3][3] = 3;
				}
			} else if(i == 1)
            {
                if(row_left[i] == '4')
                {
                    datos[0][0] = 1;
                    datos[0][1] = 2;
                    datos[0][2] = 3;
                    datos[0][3] = 4;
                } else if(row_left[i] == '3')
                {
                    datos[1][0] = 2;
                    datos[1][1] = 3;
                    datos[1][2] = 4;
                    datos[1][3] = 1;
                } else if(row_left[i] == '2')
                {
                    datos[2][0] = 3;
                    datos[2][1] = 4;
                    datos[2][2] = 1;
                    datos[2][3] = 2;
                } else if(row_left[i] == '1')
                {
                    datos[3][0] = 4;
                    datos[3][1] = 1;
                    datos[3][2] = 2;
                    datos[3][3] = 3;
                }
            } else if(i == 2)
            {
                if(row_left[i] == '4')
                {
                    datos[0][0] = 1;
                    datos[0][1] = 2;
                    datos[0][2] = 3;
                    datos[0][3] = 4;
                } else if(row_left[i] == '3')
                {
                    datos[1][0] = 2;
                    datos[1][1] = 3;
                    datos[1][2] = 4;
                    datos[1][3] = 1;
                } else if(row_left[i] == '2')
                {
                    datos[2][0] = 3;
                    datos[2][1] = 4;
                    datos[2][2] = 1;
                    datos[2][3] = 2;
                } else if(row_left[i] == '1')
                {
                    datos[3][0] = 4;
                    datos[3][1] = 1;
                    datos[3][2] = 2;
                    datos[3][3] = 3;
                }
            } else if(i == 3)
            {
                if(row_left[i] == '4')
                {
                    datos[0][0] = 1;
                    datos[0][1] = 2;
                    datos[0][2] = 3;
                    datos[0][3] = 4;
                } else if(row_left[i] == '3')
                {
                    datos[1][0] = 2;
                    datos[1][1] = 3;
                    datos[1][2] = 4;
                    datos[1][3] = 1;
                } else if(row_left[i] == '2')
                {
                    datos[2][0] = 3;
                    datos[2][1] = 4;
                    datos[2][2] = 1;
                    datos[2][3] = 2;
                } else if(row_left[i] == '1')
                {
                    datos[3][0] = 4;
                    datos[3][1] = 1;
                    datos[3][2] = 2;
                    datos[3][3] = 3;
                }
            }
			j++;
		}
		i++;
	}

	i = 0;
	j = 0;
	// Imprimiendo array
	while(i < 3)
	{
		while(j < 3)
		{
			printf("%d", datos[i][j]);
			ft_putchar(' ');
			j++;
		}
		printf("\n");
		i++;
	}	
}

int	main(void)
{
	char col_up[] = {'4', '3', '2', '1'};
	char col_down[] = {'1', '2', '2', '2'};
	char row_left[] = {'4', '3', '2', '1'};
	char row_right[] = {'1', '2', '2', '2'};

	print_table(col_up, col_down, row_left, row_right);
}
