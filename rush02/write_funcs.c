/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:04:21 by cestevez          #+#    #+#             */
/*   Updated: 2022/07/10 22:04:34 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_two(char c, int tmp, int nbr, char str);
char	*ft_itoa(long int num, char *str);
void	cut_str(char *str);
char	*ft_strstr(char *str, char *to_find);

int	write_three(int nbr, char *c)
{
	char	str[50];
	int		tmp;

	if (nbr == 0)
		return (0);
	tmp = (nbr / 100 % 10);
	if (tmp != 0)
	{
		cut_str(ft_strstr(c, ft_itoa(tmp, str)));
		cut_str(ft_strstr(c, "100:"));
	}
	tmp = (nbr % 100);
	if (tmp != 0)
	{
		if (tmp < 20)
			cut_str(ft_strstr(c, ft_itoa(tmp, str)));
		else
			write_two(c, tmp, nbr, str);
	}
	return (1);
}

void	write_two(char *c, int tmp, int nbr, char *str)
{
	tmp = tmp / 10;
	tmp = tmp * 10;
	cut_str(ft_strstr(c, ft_itoa((tmp), str)));
	tmp = nbr % 10;
	if (tmp != 0)
		cut_str(ft_strstr(c, ft_itoa(tmp, str)));
}

