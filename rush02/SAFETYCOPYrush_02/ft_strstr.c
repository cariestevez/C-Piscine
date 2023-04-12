/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cestevez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:32:20 by cestevez          #+#    #+#             */
/*   Updated: 2022/07/10 20:32:23 by cestevez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*copy(char *src, char *found, int i);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		fi;
	int		fo;
	char	found[1000];

	i = 0;
	fi = 0;
	fo = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (str[i] == to_find[fi])
			{
				fi++;
				if (to_find[fi] == '\0')
					return (copy (str, found, (i + 1 - fi)));
			}
			else
				fi = 0;
		}
		i++;
	}
	return ('\0');
}

char	*copy(char *src, char *found, int i)
{
	int	fi;

	fi = 0;
	while (src[i] != '\0' && src[i] != '\n')
	{
		found[fi] = src[i];
		i++;
		fi++;
	}
	found[fi] = '\0';
	return (found);
}
