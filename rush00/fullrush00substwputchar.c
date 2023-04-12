/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullrush00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:40:07 by cestevez          #+#    #+#             */
/*   Updated: 2022/06/26 19:02:10 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_line(char sides, char fill, char length);

void	ft_putcharnewline(char * c)
{
	write(1, &c, 2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	high;

	high = y;
	if (x <= 0 || y <= 0)
	{
		write(1, "please enter a positive number", 30);
		return ;
	}
	ft_line('o', '-', x);
	while (high > 2)
	{
		ft_line('|', ' ', x);
		high -= 1;
	}
	if (y > 1)
	{
		ft_line('o', '-', x);
	}	
}	

void	ft_line(char sides, char fill, char length)
{
	write(1, &sides, 1);
	while (length > 2)
	{
		ft_putchar(fill);
		length -= 1;
	}
	if (length > 1)
		ft_putchar(sides);
	ft_putcharnewline("\n");
}

int	main(void)
{
	rush (20, 2);
	return (0);
}
