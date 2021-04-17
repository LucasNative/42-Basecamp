/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:03:14 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/04/14 11:37:55 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char i, char j, char k)
{
	if (i != '7')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		write(1, ",  ", 2);
	}
	else
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				print_number(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
	}
}
