/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_square_with_return_point.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 13:10:35 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/13 15:43:31 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_clean_map_return_point(char **map, int *line, int *row, char c)
{
	int l_line;
	int l_row;
	int marked;

	marked = 0;
	l_line = -1;
	while (++l_line < ft_length(map))
	{
		l_row = 0;
		while (l_row < ft_length(map))
		{
			if (map[l_line][l_row] == c)
			{
				map[l_line][l_row] = '.';
				if (marked++ == 0)
				{
					if (ft_check_row_on_null(map, l_line, l_row))
						ft_r_point_row_p1(l_line, l_row, line, row);
					else if (ft_check_line_on_null(map, l_line))
						ft_r_point_line_p1(l_line, line, row);
				}
			}
			++l_row;
		}
	}
}
