/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:54:41 by ligabrie          #+#    #+#             */
/*   Updated: 2022/07/09 14:58:06 by ligabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
//#include<stdlib.h>

char    *ft_strstr(char *str, char *to_find);

void	get_magnitude (int mag, char *c);
void	cut_str (char *str);

int	ft_atoi(char *str);
char	*ft_itoa(long int num, char *str);

int	write_three(int nbr, char *c)
{
	char	str[50];

	if (nbr == 0)
	{
		return (0);
	}

	int	tmp;

	tmp = (nbr / 100 % 10);
	if (tmp != 0) {
		//printf ("%s\n", ft_itoa(tmp, str));
		cut_str(ft_strstr(c, ft_itoa(tmp, str)));
		cut_str(ft_strstr(c, "100:"));
	}
	tmp = (nbr % 100);
	if (tmp != 0)
	{
		if (tmp < 20)
		{
			//printf ("%d ", tmp);
			cut_str(ft_strstr(c, ft_itoa(tmp, str)));
			//printf(" ");
		}
		else
		{
			tmp = tmp / 10;
			//printf ("%d ", (tmp * 10));
			tmp = tmp * 10;
			cut_str(ft_strstr(c, ft_itoa((tmp), str)));
			//printf(" ");
			
			tmp = nbr % 10;
			if (tmp != 0)
			{
				//printf ("%d ", tmp);
				cut_str(ft_strstr(c, ft_itoa(tmp, str)));
				//printf(" ");
			}
		}
	}
	
	//printf("\n");
	return (1);
}

void	get_magnitude (int mag, char *c)
{
	char	str[50];
	int		i;
	
	if (mag > 1)
	{
		str[0] = '1';
		i = 1;
		while (i < mag) {
			str[i] = '0';
			i++;
		}
		str[i] = ':';
		str[i + 1] = '\0';

		cut_str(ft_strstr(c, str));
		//printf(" ");
	}
	
}

int	main(int argc, char **argv)
{
	int	nbr;
	int	i;
	int	len;
	char	tc[3];
	int	sc;
//{
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
	
	//cut_str(ft_strstr(c, "1000:"));
//}
	
	
	sc = 0;
	len = 0;
	while (argv[1][len] != '\0')
	{
		len++;
	}
	
	printf("length = %d\n", len);
	
	i = 0;
	while (i < len)
	{
		//sc = string counter -> resets to 0 every 3rd step
		tc[sc] = argv[1][i];
		
		//debug
		//printf("%c", tc[sc]);
		if (((len - i - 1) % 3) == 0)
		{
			//set to -1 because sc++ before next use
			sc = -1;
			
			//tc[i] = argv[1][i];
			//printf("\n");
			if (write_three(ft_atoi(tc), c) == 1)
			{
				get_magnitude (len - i, c);
			}
		}
		i++;
		sc++;
	}
	return (0);
}
