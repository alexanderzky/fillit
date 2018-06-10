/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_square_add_mark.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 13:27:39 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/13 14:58:41 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_clean_map_add_mark(char **map, char c)
{
	int	line;
	int	row;
	int	mark;

	line = 0;
	row = 0;
	mark = 0;
	while (line < ft_length(map))
	{
		while (row < ft_length(map))
		{
			if (map[line][row] == c)
			{
				if (mark++ == 0)
					map[line][row] = '!';
				else
					map[line][row] = '.';
			}
			++row;
		}
		row = 0;
		++line;
	}
}
