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

#include <stdio.h>
#include <stdlib.h>


int	getlen(unsigned int x);
/*void	isnegative(char *s, int x, int counti, int countj);*/
void	swap(int i, int j, char *str);

	
char	*ft_itoa(int n)
{
	int	i;
	int	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(getlen(n) + 2);
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i + 1] = '\0';
	while (j < i / 2)
	{
		swap (i, j, str);
		j++;
	}
	
	return (str);
}


int	getlen(unsigned int x)
{
	if (x >= 1000000000)
		return 10;
    if (x >= 100000000)
		return 9;
    if (x >= 10000000)
		return 8;
    if (x >= 1000000)
		return 7;
    if (x >= 100000)
		return 6;
    if (x >= 10000)
		return 5;
    if (x >= 1000)
		return 4;
    if (x >= 100)
		return 3;
    if (x >= 10)
		return 2;
    return 1;
}

/*void	isnegative(char *s, int x, int counti, int countj)
{
	s[0] = '-';
	x = -x;
	countj += 1;
	counti++;
}*/

void	swap(int i, int j, char *str)
{
	char	tmp;
	
	tmp = str[j];
	str[j] = str[i - 1 - j];
	str[i - 1 - j] = tmp;
}
int main()
{
	int num;
	char *A;

	num = -9015;

	A = ft_itoa(num);
	printf("%s", A);
}
