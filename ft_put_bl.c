/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kromsaem_kus_kus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 18:18:48 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/14 18:19:27 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		ft_put_bl(int **v, char **map, char *blocks)
{
	map[*v[0]][*v[1]] = blocks[0];
	if (blocks[++*v[2]] == '\0')
		return (1);
	++*v[3];
	if (blocks[*v[2]] == '\n')
	{
		if (map[*v[0] + 1] == '\0')
			return (blocks[0] == 'A') ? -1 : 0;
		if (ft_bl_sw(v, map, blocks) == 1)
			return (2);
	}
	else if (map[*v[0]][*v[1] + 1] == '\0')
	{
		if (map[*v[0] + 1] == '\0')
			return (blocks[0] == 'A') ? -1 : 0;
		ft_clean_map_check(map, v[0], v[1], blocks);
		*v[3] = 0;
		*v[2] = 1;
	}
	else
		++*v[1];
	return (3);
}
