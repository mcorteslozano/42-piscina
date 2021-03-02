/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:52:58 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/02 19:32:18 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_special(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while(a <= '7')
	{
		b = a + 1;
		while(b <= '8')
		{
			c = b;
			while(c <= '9')
			{
				if(a != '7' || b != '8' || c != '9')
					ft_special(a, b, c);
					ft_putchar(',');
					ft_putchar(' ');
				else
					ft_special(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
