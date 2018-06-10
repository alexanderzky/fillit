/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inner_kromsaem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 18:15:41 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/15 13:16:56 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		ft_inner(int **v, char **map, char *blocks)
{
	int j;

	while (blocks[*v[2]] != '\0')
	{
		if (blocks[*v[2]] != '\0' && map[*v[0]] == '\0')
			return (blocks[0] == 'A') ? -1 : 0;
		if (blocks[*v[2]] == '#' && (map[*v[0]][*v[1]] == '.'))
		{
			j = ft_put_bl(v, map, blocks);
			if (j <= 1)
				return (j);
			else if (j == 2)
				continue ;
		}
		else if (blocks[*v[2]] == '#' && (map[*v[0]][*v[1]] != '.'))
		{
			if (*v[1] == ft_length(map) - 1 && *v[0] == ft_length(map) - 1)
				return (blocks[0] == 'A') ? -1 : 0;
			ft_bl_mv(v, map, blocks);
		}
		else if (ft_inn_put(v, map, blocks) == 1)
			return (blocks[0] == 'A') ? -1 : 0;
	}
	return (1);
}
