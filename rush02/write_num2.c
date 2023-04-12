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

char    *ft_strstr(char *str, char *to_find);

void	get_magnitude (int mag, char *c);
void	cut_str (char *str);

int	ft_atoi(char *str);
char	*ft_itoa(long int num, char *str);
void	ft_putstr(char *str);
int     ft_is_nbr(char *str);

int	open_dict (char *name);
int	get_len (char *str);
void	segment_input (char *str, char *c, int len);
void	write_two(char *c, int tmp, int nbr, char *str);

int	write_three(int nbr, char *c)
{
	char	str[50];
	int		tmp;

	if (nbr == 0)
		return (0);
	tmp = (nbr / 100 % 10);
	if (tmp != 0)
	{
		cut_str(ft_strstr(c, ft_itoa(tmp, str)));
		cut_str(ft_strstr(c, "100:"));
	}
	tmp = (nbr % 100);
	if (tmp != 0)
	{
		write_two(c, tmp, nbr, str);
	}
	return (1);
}

void	write_two(char *c, int tmp, int nbr, char *str)
{
	if (tmp < 20)
		cut_str(ft_strstr(c, ft_itoa(tmp, str)));
	else
	{
		tmp = tmp / 10;
		tmp = tmp * 10;
		cut_str(ft_strstr(c, ft_itoa((tmp), str)));
		tmp = nbr % 10;
		if (tmp != 0)
		cut_str(ft_strstr(c, ft_itoa(tmp, str)));
	}
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
	}
	
}

int	open_dict (char *name)
{
	int	fd;

	fd = open(name, O_RDONLY); 
	if (fd < 0)
	{
		perror("r1");
		exit(1);
	}
	
	return (fd);
}

int	get_len (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	segment_input (char *str, char *c, int len)
{
	int	sc;
	int	i;
	char	tc[3];
	
	sc = 0;
	i = 0;
	while (i < len)
	{
		tc[sc] = str[i];
		if (((len - i - 1) % 3) == 0)
		{
			sc = -1;
			if (write_three(ft_atoi(tc), c) == 1)
			{
				get_magnitude (len - i, c);
			}
		}
		i++;
		sc++;
	}
}

int	check_arg (int argc)
{
	if (argc < 2)
	{
		ft_putstr("Please enter a parameter!");
		return (0);
	}
	else if (argc == 2)
		return (1);
	else if (argc == 3)
		return (2);
	else if (argc > 3)
	{
		ft_putstr("Please enter fewer parameters!");
		return (0);
	}
}

int	main(int argc, char **argv)
{
	int	len;
	int	fd; 
	char *c = (char *) malloc(500000 * sizeof(char));
	int	argi;

	argi = check_arg(argc);
	if (argi == 0)
		return (0);
	else if (argi == 1)
		fd = open_dict("numbers.dict");
	else if (argi == 2)
		fd = open_dict(argv[1]);

	if (ft_is_nbr (argv[argi]) == 0)
	{
		ft_putstr ("Error!");
		return (0);
	}
	read(fd, c, 5000000);
	len = get_len (argv[argi]);
	segment_input(argv[argi], c, len);
	return (0);
}
