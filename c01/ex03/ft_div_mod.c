/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:07:10 by cestevez          #+#    #+#             */
/*   Updated: 2022/06/30 21:07:12 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	resultdiv;
	int	resultmod;

	a = 67;
	b = 2;
	
	div = &resultdiv;
	mod = &resultmod;
	ft_div_mod(a, b, div, mod);
	printf("%d, %d", resultdiv, resultmod);
}*/
