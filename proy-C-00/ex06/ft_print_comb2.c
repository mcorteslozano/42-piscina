/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:52:01 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/02 18:52:31 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	while_u(char m, char c, char d, char u);

void	ft_print_comb2(void)
{
	char m;
	char c;
	char d;
	char u;

	m = '/';
	while (m++ < '9')
	{
		c = '/';
		while (c++ < '9')
		{
			d = '/';
			while (d++ < '9')
			{
				u = '/';
				while_u(m, c, d, u);
			}
		}
	}
}

void	while_u(char m, char c, char d, char u)
{
	while (u++ < '9')
	{
		if ((m < d) || ((c < u) && (m == d)))
		{
			write(1, &m, 1);
			write(1, &c, 1);
			write(1, " ", 1);
			write(1, &d, 1);
			write(1, &u, 1);
			if (m != '9' || c != '8' || d != '9' || u != '9')
				write(1, ", ", 2);
		}
	}
}

int		main()
{
ft_print_comb2();
}
