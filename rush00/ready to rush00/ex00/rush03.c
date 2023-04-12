/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:24:17 by yli               #+#    #+#             */
/*   Updated: 2022/06/26 20:07:59 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char s);

void	rush(int x, int y)
{
	int	count_x;
	int	count_y;

	count_y = 1;
	while (count_y <= y && x > 0)
	{
		count_x = 1;
		while (count_x <= x)
		{
			if ((count_x == 1 && count_y == 1)
				|| (count_x == 1 && count_y == y))
				ft_putchar('A');
			else if ((count_x == x && count_y == 1)
				|| (count_x == x && count_y == y))
				ft_putchar('C');
			else if (count_x == 1 || count_y == 1
				|| count_x == x || count_y == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			count_x++;
		}
		count_y++;
		ft_putchar('\n');
	}
}
