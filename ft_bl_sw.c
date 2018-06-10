/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kromsaem_ponemnogu.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 18:28:44 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/15 12:51:40 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_bl_sw(int **v, char **map, char *blocks)
{
	if (*v[1] == ft_length(map) - 1)
	{
		*v[1] -= ft_bs(blocks, *v[2]) < 0 ? 0 : ft_bs(blocks, *v[2]);
		*v[0] = *v[0] + 1;
		*v[2] = *v[2] + 1;
	}
	else if (*v[1] < ft_length(map) - 1)
	{
		if (*v[1] < ft_bs(blocks, *v[2]))
		{
			ft_clean_map(map, blocks[0]);
			*v[3] = 0;
			*v[1] = *v[1] + 1;
			*v[2] = 1;
			return (1);
		}
		*v[1] = *v[1] - ft_bs(blocks, *v[2]);
		*v[0] = *v[0] + 1;
		*v[2] = *v[2] + 1;
	}
	return (0);
}
