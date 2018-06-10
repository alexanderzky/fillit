/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:10:56 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 17:18:37 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		ft_min_size(char *arr)
{
	int size;
	int edge;
	int square;

	size = ft_fig_cnt(arr);
	square = size * 4;
	while (!(edge = ft_sqrt(square)))
		square++;
	return (edge);
}
