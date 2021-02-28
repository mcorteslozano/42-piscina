/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 13:35:19 by mcortes-          #+#    #+#             */
/*   Updated: 2021/02/28 13:35:25 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int n;
	int m;

	m = 1;
	n = 1;
	while (m <= y)
	{
		if (m == 1 || m == y)
			while (n <= x)
			{
				(n == 1 | n == x) ? ft_putchar('o') : ft_putchar('-');
				++n;
			}
		else
			while (n <= x)
			{
				(n == 1 || n == x) ? ft_putchar('|') : ft_putchar(' ');
				++n;
			}
		ft_putchar('\n');
		++m;
		n = 1;
	}
}
