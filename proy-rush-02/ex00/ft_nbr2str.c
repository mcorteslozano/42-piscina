/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr2str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:30:50 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/14 20:30:51 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void 	ft_midnumbers(unsigned int num, long *dct_num, char **dct_c, int len)
{
	int i;
	int tmp;

	i = 1;
	while ((len - i) > 0 && num != 0)
	{
		tmp = (num / dct_num[len - i]);
		if (num < dct_num[len - i] || dct_num[len - i] < 0)
		{
			i++;
		}
		else if ((num >= dct_num[len - i]) && (num > 99 && tmp == 1))
		{
			ft_nbr2c(tmp, dct_num, dct_c, len);
			ft_print(dct_c[len - i]);
			num = num - tmp * dct_num[len - i];
			i = 1;
		}
		else if ((num >= dct_num[len - i] && num <= 99) && (tmp > 0 && tmp <= 20))
		{
			ft_print(dct_c[len - i]);
			num = num - tmp * dct_num[len - i];
			i = 1;
		}
		else if ((num >= dct_num[len - i] && num > 99 ) && (tmp > 0 && tmp <= 9))
		{
			ft_nbr2c(tmp, dct_num, dct_c, len);
			ft_print(dct_c[len - i]);
			if (num % (tmp * dct_num[len - i]) != 0)
			{
				ft_print("and");
			}
			num = num - tmp * dct_num[len - i];
			i = 1;
		}
		else if (num >= dct_num[len - i] && (tmp > 20 && tmp < 99))
		{
			i++;
		}
	}
}

int ft_max_dct (unsigned int num, unsigned int tmp, long *dct_num, int len)
{
	int i;
	int pos;
	unsigned int value;
	
	i = 0;
	pos = len;
	while ((len - i) > 0)
	{
		value = (num / dct_num[len - i]) ;
		if (num > (unsigned int)dct_num[len - i] && value < tmp)
		{
			pos = len - i;
		}
		i++;
	}
	return (pos);
}

void	ft_assignation(unsigned int num, long *dct_num, char **dct_c, int len)
{
	int i;
	unsigned int tmp;

	i = 1;
	if (num == 0)
	{
		while (num != dct_num[len - i])
		{
			i++;
		}
	ft_print(dct_c[len - i]);
	}
	else
	{
		while ((len - i) > 0)
		{
			tmp = (num / dct_num[len - i]);
			if (num < dct_num[len - i] || dct_num[len - i] < 0)
			{
				i++;
			}
			else if (num == dct_num[len - 1])
			{
					ft_print(dct_c[len - i]);
					num = num - (tmp * dct_num[len - i]);
			}
			else if (num >= dct_num[len - i] && (tmp > 0 && tmp <= 20))
			{
				i = len - ft_max_dct (num, tmp, dct_num, len - i);
				tmp = (num / dct_num[len - i]);

				if (num >= 100 && num < 999)
				{
					ft_nbr2c(tmp, dct_num, dct_c, len);
					ft_print(dct_c[len - i]);
					if (num % (tmp * dct_num[len - i]) != 0)
					{
						ft_print("and");
					}
				
				}
				else if (num >= 1000)
				{
					ft_nbr2c(tmp, dct_num, dct_c, len);
					ft_print(dct_c[len - i]);
				}
				else
				{
					ft_print(dct_c[len - i]);
				}
				num = num - (tmp * dct_num[len - i]);
				i = 1;
			}
			else if (num >= dct_num[len - i] && (tmp > 20 && tmp < 999))
			{
				ft_midnumbers(tmp, dct_num, dct_c, len);
				ft_print(dct_c[len - i]);
				num = num - (tmp * dct_num[len - i]);
				i = 1;
			}
			else
			{
				i++;
			}
		}
		if (num < 100)
		{
			ft_midnumbers(num, dct_num, dct_c, len);
		}
	}
}
