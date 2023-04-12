/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <pagabrie@student.42berlin.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:03:33 by riael             #+#    #+#             */
/*   Updated: 2022/06/26 16:08:45 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_line(char m, char fill, char n, int length);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Please give me a valid input\n", 29);
		return ;
	}
	ft_line('A', 'B', 'C', x);
	while (y > 2)
	{
		ft_line('B', ' ', 'B', x);
		y -= 1;
	}
	if (y > 1)
		ft_line('C', 'B', 'A', x);
}

void	ft_line(char m, char fill, char n, int length)
{
	write(1, &m, 1);
	while (length > 2)
	{
		write(1, &fill, 1);
		length -= 1;
	}
	if (length > 1)
		write(1, &n, 1);
	write(1, "\n", 1);
}
