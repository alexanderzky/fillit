/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kromsaem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 18:27:41 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/14 18:28:26 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_bl_mv(int **v, char **map, char *blocks)
{
	if (*v[3] != 0)
	{
		ft_clean_map_check(map, v[0], v[1], blocks);
		*v[3] = 0;
		*v[2] = 1;
	}
	else if (*v[1] == ft_length(map) - 1)
	{
		*v[2] = 1;
		*v[1] = 0;
		*v[0] = *v[0] + 1;
	}
	else if (*v[1] < ft_length(map) - 1)
	{
		ft_clean_map_check(map, v[0], v[1], blocks);
		*v[2] = 1;
		*v[1] += (ft_dd(blocks)) ? 0 : 1;
	}
}
