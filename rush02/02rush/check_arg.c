/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:44:22 by cestevez          #+#    #+#             */
/*   Updated: 2022/07/10 22:44:23 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	check_arg(int argc)
{
	if (argc < 2)
	{
		ft_putstr("Error!\n");
		return (0);
	}
	else if (argc == 2)
		return (1);
	else if (argc == 3)
		return (2);
	else
	{
		ft_putstr("Error!\n");
		return (0);
	}
}
