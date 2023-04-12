/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <pagabrie@student.42berlin.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:07:09 by riael             #+#    #+#             */
/*   Updated: 2022/06/26 13:09:42 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);
int		ft_skip_spaces(char *str);
int		ft_solve_sign(char *str, int i);
int		ft_calculate_result(char *str, int i, int sign);
int		ft_ultimate_rush(int x, int y, char **argv, int argc);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = ft_skip_spaces(str);
	if (i < 0)
		return (-1);
	sign = ft_solve_sign(str, i);
	if (sign == 0)
		return (-1);
	if (sign != 20)
		i++;
	result = ft_calculate_result(str, i, sign);
	return (result);
}

int	ft_skip_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i += 1;
	if (str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
		return (i);
	return (-1);
}

int	ft_solve_sign(char *str, int i)
{
	if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (-1);
	if ((str[i] == '+' || str[i] == '-')
		&& !(str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (0);
	if (str[i] >= '0' && str[i] <= '9')
		return (20);
	return (1);
}

int	ft_calculate_result(char *str, int i, int sign)
{
	int	result;

	result = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i += 1;
	}
	if (sign == 20)
		return (result);
	return (result * sign);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(&argv[1][0]), ft_atoi(&argv[2][0]));
	else if (argc == 12)
		ft_ultimate_rush(ft_atoi(&argv[1][0]),
			ft_atoi(&argv[2][0]), argv, argc);
	else if (argc != 1)
		write(1, "Please give me only 2 or 11 arguments\n", 38);
	if (argc == 1)
		rush(7, 3);
	return (0);
}
