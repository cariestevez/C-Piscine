/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yli <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 20:56:15 by yli               #+#    #+#             */
/*   Updated: 2022/06/26 16:10:05 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_line(char m, char fill, char n, char length);

void	rush(int x, int y)
{
	int	length;

	if (x <= 0 || y <= 0)
	{
		write(1, "Please give me a valid input\n", 29);
		return ;
	}
	length = y;
	ft_line('/', '*', '\\', x);
	while (length > 2)
	{
		ft_line('*', ' ', '*', x);
		length -= 1;
	}
	if (y > 1)
		ft_line('\\', '*', '/', x);
}

void	ft_line(char m, char fill, char n, char length)
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
