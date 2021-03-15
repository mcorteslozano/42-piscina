/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:30:40 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/14 21:48:32 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			RUSH02
# define 		RUSH02

long	ft_atoi(char *str);
long	ft_atoi2(char *t);
int		ft_count_longest(char *p, int size);
int		ft_count_lines(char *str, unsigned int size);
long	*ft_find_numbers(char *p, int size);
char	**new_tab(char *p, int size);
char	**ft_find_names(char *p, char **name_tab);
void	ft_midnumbers(unsigned int num, long *dct_num, char **dct_c, int len);
int		ft_max_dct (unsigned int num, unsigned int tmp, long *dct_num, int len);
void	ft_assignation(unsigned int num, long *dct_num, char **dct_c, int len);
void	ft_print(char *str);
void	ft_nbr2c(unsigned int num, long *dct_num, char **dct_c, int len);
int		check_dictionary1(char *p);
int		check_dictionary2(char *p);
int		check_dictionary_pre(char *p, int lines);

#endif
