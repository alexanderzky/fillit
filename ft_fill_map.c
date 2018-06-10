/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 13:28:03 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 16:50:09 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	**ft_fill_map(char **square, char **figures)
{
	int res;
	int i;

	i = 0;
	while (figures[i] != '\0')
	{
		res = ft_put_figure(square, figures[i++]);
		ft_clean_map(square, '!');
		if (res == 0)
		{
			ft_clean_map(square, figures[--i][0]);
			ft_clean_map_add_mark(square, figures[--i][0]);
			continue ;
		}
		if (res == -1)
		{
			square = ft_map_resize(square);
			return (ft_fill_map(square, figures));
		}
	}
	return (square);
}
