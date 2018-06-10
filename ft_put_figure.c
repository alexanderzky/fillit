/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_figure.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:19:46 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 17:20:09 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static void	ft_init(int **v)
{
	*v[0] = 0;
	*v[1] = 0;
	*v[2] = 1;
	*v[3] = 0;
}

int			ft_put_figure(char **map, char *blocks)
{
	int line;
	int row;
	int bl_i;
	int posted;
	int *vars[4];

	vars[0] = &line;
	vars[1] = &row;
	vars[2] = &bl_i;
	vars[3] = &posted;
	ft_init(vars);
	ft_check_mark(map, &line, &row, blocks);
	return (ft_inner(vars, map, blocks));
}
