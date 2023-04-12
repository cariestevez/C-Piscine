/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:28:17 by cestevez          #+#    #+#             */
/*   Updated: 2022/07/10 16:28:18 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	strsrc[] = "do yoube b wannabe be my bf";
	char	strto_find[] = "be be";

	printf("%s", ft_strstr(strsrc, strto_find));
}*/