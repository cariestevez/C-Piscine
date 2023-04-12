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

char    *ft_strstr(char *str, char *to_find);

/*
char	*remove_space (char *str)
{
	char *tmp = (char *) malloc(500000 * sizeof(char));
	int	i;
	int	tmpi;
	
	i = 0;
	tmpi = 0;
	while (str[i] != '\n')
	{
		str[i] = 
		i++;
		tmpi++;
	}
}
*/

void	cut_str (char *str)
{
	int	i;
	char	out[1000];
	int	pastcolon;
	int	outi;
	
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
		{
			pastcolon = 1;
		}
		
		i++;
	}
	out[outi] = '\0';
	
	printf("%s ", out);
}

/*
int	main (void)
{
	int fd, sz; 
	char *c = (char *) malloc(500000 * sizeof(char));
	  
	fd = open("numbers.dict", O_RDONLY); 
	if (fd < 0) { perror("r1"); exit(1); } 
	  
	sz = read(fd, c, 5000000); 
	//printf("called read(%d, c, 10). returned that"
	//	" %d bytes were read.\n", fd, sz); 
	c[sz] = '\0'; 
	//printf("Those bytes are as follows: %s\n", c);
	
	//printf("%s", ft_strstr(c, "1000:"));
	
	cut_str(ft_strstr(c, "1000:"));
}
*/
