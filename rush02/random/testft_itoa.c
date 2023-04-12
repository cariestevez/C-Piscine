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

#include <unistd.h>
#include <stdio.h>

char *ft_itoa(long int num, char* str)
{
	int	i;
	int j;
	int	rem;
	char	tmp;

	i = 0;
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (num != 0)
	{	
		rem = num % 10;
		str[i] = rem + '0';
		i++;
		num = num / 10;
	}
	str[i] = '\0';
	j = 0;
	while (j < i/2)
	{
		tmp = str[j];
		str[j] = str[i - 1 - j];
		str[i - 1 - j] = tmp;
		j++;
	}
	return (str);
}

int	main(void)
{
	char	str[200];

	ft_itoa(12345887696465465454354657877777777777777777, str);
	printf("%s", str);
	return (0);
}
