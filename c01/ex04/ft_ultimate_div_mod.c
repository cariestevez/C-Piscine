/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:09:52 by cestevez          #+#    #+#             */
/*   Updated: 2022/06/30 21:09:53 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	ptra;
	int	ptrb;
	
	ptra = 67;
	ptrb = 3;
	a = &ptra;
	b = &ptrb;
	
	ft_ultimate_div_mod(a, b);
	printf("%d, %d", *a, *b);
}*/
