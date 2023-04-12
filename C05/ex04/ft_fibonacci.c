/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:11:06 by cestevez          #+#    #+#             */
/*   Updated: 2022/07/14 16:11:07 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{	
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	if (index > 1)
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
/*int	main()
{
	printf("%d", ft_fibonacci(10));
}*/