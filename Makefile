# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/15 13:57:40 by ozalisky          #+#    #+#              #
#    Updated: 2018/01/15 13:57:40 by ozalisky         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAG = -Wall -Wextra -Werror -o

LIBFT = libft/

COMP = make -C $(LIBFT) re

COMPC = make -C $(LIBFT) clean

COMPF = make -C $(LIBFT) fclean

NAME = fillit

SRCS = $(LIBFT)libft.a \
	ft_check_line_on_null.c\
	ft_check_row_on_null.c\
	ft_clean_map.c\
	ft_clean_map_add_mark.c\
	ft_clean_map_check.c\
	ft_clean_map_dot_with_return_point.c\
	ft_clean_map_double_dot_with_return_point.c\
	ft_clean_map_with_return_point.c\
	ft_figure_saver.c ft_check_mark.c\
	ft_fill_map.c ft_bs.c ft_map.c\
	ft_map_drawer.c ft_fig_cnt.c\
	ft_put_figure.c ft_min_size.c\
	ft_r_point.c\
	ft_r_point_line_p1.c\
	ft_r_point_row_1.c\
	ft_r_point_row_p1.c\
	ft_read_file.c\
	ft_sqrt.c\
	ft_validator.c\
	ft_inner.c ft_inn_put.c ft_put_bl.c\
	ft_bl_mv.c ft_bl_sw.c ft_dd.c ft_length.c ft_true_check.c\
	main.c

all:  $(NAME)

$(NAME):
	@$(COMP)
	@$(CC) $(FLAG) $(NAME) $(SRCS)

clean:
	@$(COMPC)

fclean: clean
	@$(COMPF)
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re