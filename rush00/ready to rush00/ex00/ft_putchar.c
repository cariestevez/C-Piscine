/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <pagabrie@student.42berlin.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:07:47 by riael             #+#    #+#             */
/*   Updated: 2022/06/26 12:05:02 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_check_args(int x, int y, char **argv, int argc);
void	ft_ult_line(char **argv, int x, int position);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ultimate_rush(int x, int y, char **argv, int argc)
{
	int	check;
	int	position;

	position = 3;
	check = ft_check_args(x, y, argv, argc);
	if (check == 1)
	{
		ft_ult_line(argv, x, position);
		position += 3;
		while (y > 2)
		{
			ft_ult_line(argv, x, position);
			y -= 1;
		}
		position += 3;
		if (y > 1)
			ft_ult_line(argv, x, position);
	}
}

int	ft_check_args(int x, int y, char **argv, int argc)
{
	int	i;

	i = 3;
	if (x <= 0 || y <= 0 || argc != 12)
	{
		write(1, "Please give me a valid input\n", 29);
		return (-1);
	}
	while (argv[i][0] != '\0' && i < 11)
	{
		if (argv[i][1] != '\0' || (argv[i][0] < 32 || argv[i][0] == 127))
			return (-1);
		i += 1;
	}
	return (1);
}

void	ft_ult_line(char **argv, int x, int position)
{
	write(1, &argv[position][0], 1);
	position += 1;
	while (x > 2)
	{
		write(1, &argv[position][0], 1);
		x -= 1;
	}
	position += 1;
	if (x > 1)
		write(1, &argv[position][0], 1);
	write (1, "\n", 1);
}
