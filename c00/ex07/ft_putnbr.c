/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 22:02:38 by cestevez          #+#    #+#             */
/*   Updated: 2022/06/29 22:02:46 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			write(1, "-", 1);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		a = nb % 10 + 48;
		write (1, &a, 1);
	}
}
/* it's a recursive function! 
We need to do the division and then also the modulo in order to print both numbers as characters. With / we print the 1st digit, with % we print the second one. The +48 is the same as if we would put +'\0', to converti it with ascii into a character.*/
