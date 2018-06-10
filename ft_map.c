/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:02:18 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 17:02:45 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "libft/libft.h"

char	**ft_map(char *arr)
{
	char	**map;
	char	*str;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = ft_min_size(arr);
	map = (char**)malloc(sizeof(char*) * (size + 1));
	while (i < size)
	{
		str = (char*)malloc(sizeof(char) * size + 1);
		while (j < size)
			str[j++] = '.';
		str[j] = '\0';
		map[i++] = str;
		j = 0;
	}
	map[i] = 0;
	return (map);
}
