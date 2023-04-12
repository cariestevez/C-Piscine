/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:57:05 by cestevez          #+#    #+#             */
/*   Updated: 2022/07/09 21:57:07 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int i, int j, char *str);

char	*ft_itoa(long int num, char *str)
{
	int		i;
	int		j;

	i = 0;
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (num != 0)
	{	
		str[i++] = (num % 10) + '0';
		num = num / 10;
	}
	str[i] = ':';
	str[i + 1] = '\0';
	j = 0;
	while (j < i / 2)
	{
		swap (i, j, str);
		j++;
	}
	return (str);
}

void	swap(int i, int j, char *str)
{
	char	tmp;

	tmp = str[j];
	str[j] = str[i - 1 - j];
	str[i - 1 - j] = tmp;
}
