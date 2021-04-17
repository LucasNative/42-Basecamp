/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 22:46:17 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/04/04 22:48:39 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char a, char b, char c, int x)
{
	int column;

	column = 1;
	if (column++ == 1)
		ft_putchar(a);
	while (column++ < x)
		ft_putchar(b);
	if (--column == x)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;

	line = 1;
	if (x <= 0 || y <= 0)
		return ;
	if (line++ == 1)
		print_line('A', 'B', 'C', x);
	while (line++ < y)
		print_line('B', ' ', 'B', x);
	if (--line == y && y != 1)
		print_line('A', 'B', 'C', x);
}
