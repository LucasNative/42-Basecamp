/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:57:33 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/04/13 14:57:38 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	write_message(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}
