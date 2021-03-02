/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:05:13 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/02 19:35:06 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	g_array[9];

void	ft_update_last(int n);

void	ft_printarray(int n, int is_last);

void	ft_fill(int start_i, int n);

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		g_array[i] = '0';
		i++;
	}
	ft_fill(0, n);
}

void	ft_fill(int start_i, int n)
{
	while (start_i + 1 != n)
	{
		g_array[start_i + 1] = g_array[start_i] + 1;
		start_i++;
	}
	ft_update_last(n);
}

void	ft_printarray(int n, int is_last)
{
	int i;

	i = 0;
	while (i < n)
	{
		write(1, &g_array[i], 1);
		i++;
	}
	if (is_last == 0)
		write(1, &", ", 2);
}

void	ft_update_last(int n)
{
	int last_i;
	int count;

	last_i = n - 1;
	count = 0;
	while (g_array[last_i] < '9')
	{
		ft_printarray(n, 0);
		g_array[last_i]++;
	}
	while (g_array[last_i] == g_array[last_i - 1] + 1)
	{
		last_i--;
	}
	last_i--;
	if (last_i < 0)
		ft_printarray(n, 1);
	else
	{
		ft_printarray(n, 0);
		g_array[last_i]++;
		ft_fill(last_i, n);
	}
}
