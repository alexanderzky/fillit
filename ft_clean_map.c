/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:29:41 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/13 14:11:36 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_clean_map(char **map, char c)
{
	int	line;
	int	row;
	int	length;

	length = (int)ft_length(map);
	line = 0;
	row = 0;
	while (line < length)
	{
		while (row < length)
		{
			if (map[line][row] == c)
			{
				map[line][row] = '.';
			}
			++row;
		}
		row = 0;
		++line;
	}
}
