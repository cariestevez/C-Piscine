OBJ = ft_atoi.o ft_itoa.o ft_putstr.o write_num.o file_to_str.o ft_strstr.o
NAME = prog
CFLAGS = -Wall -Wextra -Werror

prog:	$(OBJ)
	gcc -o prog $(OBJ)

ft_atoi.o:	ft_atoi.c
	gcc -c $(CFLAGS) ft_atoi.c
ft_itoa.o:	ft_itoa.c
	gcc -c $(CFLAGS) ft_itoa.c
ft_putstr.o:	ft_putstr.c
	gcc -c $(CFLAGS) ft_putstr.c
write_num.o: write_num.c
	gcc -c $(CFLAGS) write_num.c
file_to_str.o:	file_to_str.c
	gcc -c $(CFLAGS) file_to_str
ft_strstr.o:	ft_strstr.c
	gcc -c $(CFLAGS) ft_strstr.c
clean:
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)