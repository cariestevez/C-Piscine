/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:47:27 by cestevez          #+#    #+#             */
/*   Updated: 2022/06/30 20:47:29 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int	main(void)
{
	int	c;
	int	o;
	int	*coco;
	int	*olivia;

	c = 2;
	o = 4;
	coco = &c;
	olivia = &o;
	printf("%d, %d\n", c, o);
	ft_swap(coco, olivia);
	printf("%d, %d", c, o);
}*/
