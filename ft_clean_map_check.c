/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_square_check.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 13:27:22 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/13 13:27:22 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_clean_map_check(char **map, int *line, int *row, char *figures)
{
	if (figures[1] == '.' && figures[2] == '.')
	{
		ft_clean_map_d_dot_r_point(map, line, row, figures[0]);
	}
	else if (figures[1] == '.')
	{
		ft_clean_map_dot_r_point(map, line, row, figures[0]);
	}
	else
	{
		ft_clean_map_return_point(map, line, row, figures[0]);
	}
}
