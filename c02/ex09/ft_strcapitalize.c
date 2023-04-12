/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:20:29 by cestevez          #+#    #+#             */
/*   Updated: 2022/07/05 18:20:30 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !((str[i - 1] >= '0' && str[i - 1] <= '9'))
			&& !((str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			&& !((str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = "aBcr_a7jk=jd/u.ydGe-W";

	printf("%s", ft_strcapitalize(str));
}*/
