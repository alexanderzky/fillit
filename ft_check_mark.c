/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_mark.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:54:03 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 16:54:32 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_check_mark(char **square, int *line, int *row, char *figures)
{
	int l_line;
	int l_row;

	l_line = 0;
	while (l_line < ft_length(square))
	{
		l_row = 0;
		while (l_row < ft_length(square))
		{
			if (square[l_line][l_row] == '!')
			{
				if (figures[1] == '.' && figures[2] == '.')
				{
					*line = l_line;
					*row = --l_row;
					return ;
				}
				*line = l_line;
				*row = l_row;
				return ;
			}
			++l_row;
		}
		++l_line;
	}
}
