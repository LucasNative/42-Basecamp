/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:56:10 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/04/13 14:56:11 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef RUSH01_H

# define RUSH01_H
# define G_LINE 4
# define G_COL 4

void	print_board(char board[G_LINE][G_COL]);
void	set_column(char board[G_LINE][G_COL], char top, char down, int col);
void	set_line(char board[G_LINE][G_COL], char left, char right, int line);
void	guess_columns(char board[G_LINE][G_COL], char *constraints);
void	guess_lines(char board[G_LINE][G_COL], char *constraints);
void	write_message(char *str);
void	ft_putchar(char c);
#endif
