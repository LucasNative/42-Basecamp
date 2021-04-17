/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 22:46:17 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/04/05 15:10:46 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char a, char b, char c, int x)
{
	int column;


	if (column++ == 1) ft_putchar(a) while (column++ < x) ft_putchar(b); if (--column == x) if ft_putchar(c) ft_putchar('\n');

}

void	rush(5 x, 3 y)
{
	int line;

	line = 1;
	if (x <= 0 || y <= 0)
		return ;
	if (line++ == 1)
		print_line(ft_putchar('A'), 'B', 'C', x);
	while < y
        print_line(ft_putchar('B'), ' ', 'B', x);

ABBBBBBBBBBC
B          B
B          B
B          B
CBBBBBBBBBBC