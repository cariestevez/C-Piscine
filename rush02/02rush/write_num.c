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
//open/close files
#include<fcntl.h>
#include<stdlib.h>

char	*ft_strstr(char *str, char *to_find);
void	get_magnitude(int mag, char *c);
void	cut_str(char *str);
int		ft_atoi(char *str);
char	*ft_itoa(long int num, char *str);
int		open_dict(char *name);
int		get_len(char *str);
void	segment_input(char *str, char *c, int len);
void	write_two(char *c, int tmp, int nbr, char *str);
int		write_three(int nbr, char *c);
int		ft_is_nbr(char *str);
void	ft_putstr(char *str);
int		check_arg(int argc);

void	get_magnitude(int mag, char *c)
{
	char	str[50];
	int		i;

	if (mag > 1)
	{
		str[0] = '1';
		i = 1;
		while (i < mag)
		{
			str[i] = '0';
			i++;
		}
		str[i] = ':';
		str[i + 1] = '\0';
		cut_str(ft_strstr(c, str));
	}
}

//open the dict file
int	open_dict(char *name)
{
	int	fd;
	//open (sting, option: read only)
	fd = open(name, O_RDONLY);
	if (fd < 0)
	{
		perror("r1");
		exit(1);
	}
	return (fd);
}

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//c = dict as string
void	segment_input(char *str, char *c, int len)
{
	int		sc;
	int		i;
	char	tc[3];

	sc = 0;
	i = 0;
	while (i < len)
	{
		tc[sc] = str[i];
		//length minus current position in input string
		if (((len - i - 1) % 3) == 0)
		{
			//sc should be 0! but is increased before next use.
			sc = -1;
			//if == 0 -> last block of 3!
			if (write_three(ft_atoi(tc), c) == 1)
			{
				//gets the millions, billions etc
				get_magnitude (len - i, c);
			}
		}
		i++;
		sc++;
	}
}

int	main(int argc, char **argv)
{
	int		len;
	int		fd;
	char	*c;
	int		argi;

	//allocate memory
	c = (char *) malloc(500000 * sizeof(char));
	//1 {number} or 2 {dict, number} arguments;
	argi = check_arg(argc);
	if (argi == 0)
		return (0);
	else if (argi == 1)
	//opens the dict file
		fd = open_dict("numbers.dict");
	else if (argi == 2)
		fd = open_dict(argv[1]);
	//check if inpput is only numbers
	if (ft_is_nbr (argv[argi]) == 0)
	{
		ft_putstr ("Error!\n");
		return (0);
	}
	//reads the dict file to a single string
	read(fd, c, 500000);
	//get the length of the input str 
	len = get_len (argv[argi]);
	//splits the str into bits of 3
	segment_input(argv[argi], c, len);
	free(c);
	return (0);
}
