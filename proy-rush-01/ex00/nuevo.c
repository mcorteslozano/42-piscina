/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:27:38 by smoreira          #+#    #+#             */
/*   Updated: 2021/03/06 14:40:23 by smoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	array(int a, int b, int c, int d/*, int e, int f, int g, int h, int x, int j, int k, int l, int m, int n, int o, int p*/)
{
	int colup[4] = {a, b, c, d};
	int miarr[4] = {1, 2, 3, 4};
	/*int coldown[4] = {e, f, g, h};
	int rowleft[4] = {x, j, k, l};
	int rowright[4] = {m, n, o, p};*/
	int i;
	int *ptr;
	int *ptr2;
	int y;

	i = 0;
	ptr = &colup[0];
	ptr2 = &miarr[0];
	while (*(ptr + i) != 0)
	{
		if (*(ptr + i) == 4)
		{
			y = *(ptr2 + 0);
			printf("%d ", y);
			i++;
		}
		else if (*(ptr + i) == 3)
		{
			y = *(ptr2 + 1);
			printf("%d ", y);
			i++;
		}
		else if (*(ptr + i) == 2)
		{
			y = *(ptr2 + 2);
			printf("%d ", y);
			i++;
		}
		else
		{
			y = *(ptr2 + 3);
			printf("%d ", y);
			i++;
		}
	}
	printf("\n");
	i = 0;
	while (*(ptr + i) != 0)
    {
        if (*(ptr + i) == 4)
        {
            y = *(ptr2 + 1);
            printf("%d ", y);
            i++;
        }
        else if (*(ptr + i) == 3)
        {
            y = *(ptr2 + 2);
            printf("%d ", y);
            i++;
        }
        else if (*(ptr + i) == 2)
        {
            y = *(ptr2 + 3);
            printf("%d ", y);
            i++;
        }
        else
        {
            y = *(ptr2 + 0);
            printf("%d ", y);
            i++;
        }
    }
    printf("\n");
	i = 0;
	while (*(ptr + i) != 0)
    {
        if (*(ptr + i) == 4)
        {
            y = *(ptr2 + 2);
            printf("%d ", y);
            i++;
        }
        else if (*(ptr + i) == 3)
        {
            y = *(ptr2 + i + 3);
            printf("%d ", y);
            i++;
        }
        else if (*(ptr + i) == 2)
        {
            y = *(ptr2);
            printf("%d ", y);
            i++;
        }
        else
        {
            y = *(ptr2 + 1);
            printf("%d ", y);
            i++;
        }
    }
	printf("\n");
	i = 0;
	while (*(ptr + i) != 0)
    {
        if (*(ptr + i) == 4)
        {
            y = *(ptr2 + 3);
            printf("%d ", y);
            i++;
        }
        else if (*(ptr + i) == 3)
        {
            y = *(ptr2);
            printf("%d ", y);
            i++;
        }
        else if (*(ptr + i) == 2)
        {
            y = *(ptr2 + 1);
            printf("%d ", y);
            i++;
        }
        else
        {
            y = *(ptr2 + 2);
            printf("%d ", y);
            i++;
        }
    }
	printf("\n");
}

int		main()
{
	array(1, 4, 3, 2/*, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2*/);
}

