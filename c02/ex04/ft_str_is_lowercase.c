/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:12:58 by cestevez          #+#    #+#             */
/*   Updated: 2022/07/05 17:13:02 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	str[] = "";

	printf("%d", ft_str_is_lowercase(str));
}*/
