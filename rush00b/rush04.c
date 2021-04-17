/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:50:45 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/04/05 14:54:32 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */






















void	ft_putchar(char c);

void	print_line(char a, char b x vezes, char c, char e, int x)
{
		print_line('A', 'BBB', 'C', x);
	
		ft_putchar(a);
	
		ft_putchar(b);
	
		ft_putchar(c);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	int column;

	column = 1;
	if (column++ == 1)
	while (column++ < x)
	if (--column == x)
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;

	line = 1;
	if (x <= 0 || y <= 0)
		return ;
	if (line++ == 1)
	while (line++ < y)
		print_line('B', ' ', 'B', x);
	if (--line == y && y != 1)
		print_line('C', 'B', 'A', x);
}
