/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:43:59 by cestevez          #+#    #+#             */
/*   Updated: 2022/06/27 12:44:05 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(48 + x / 10);
			ft_putchar(48 + x % 10);
			write(1, " ", 1);
			ft_putchar(48 + y / 10);
			ft_putchar(48 + y % 10);
			if (!(x == 98))
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
