/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:19:46 by ligabrie          #+#    #+#             */
/*   Updated: 2022/07/10 15:19:49 by ligabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

char	*ft_strstr(char *str, char *to_find);

void	cut_str(char *str)
{
	int		i;
	char	out[1000];
	int		pastcolon;
	int		outi;

	i = 0;
	outi = 0;
	pastcolon = 0;
	while (str[i] != '\0')
	{
		if (pastcolon == 1)
		{
			if (str[i] != ' ')
			{
				out[outi] = str[i];
				outi++;
			}	
		}
		if (str[i] == ':')
			pastcolon = 1;
		i++;
	}
	out[outi] = '\0';
	printf("%s ", out);
}
