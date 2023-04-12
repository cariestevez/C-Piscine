/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:02:51 by cestevez          #+#    #+#             */
/*   Updated: 2022/07/05 17:02:55 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 48 && str[i] <= 57)))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	str[] = "666";

	printf("%d", ft_str_is_numeric(str));
}*/
