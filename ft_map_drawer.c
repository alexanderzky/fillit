/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_drawer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 19:06:32 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 17:09:20 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "libft/libft.h"

char	**ft_map_resize(char **map)
{
	int		size;
	char	*str;
	int		i;
	int		j;

	size = ft_strlen(map[0]);
	ft_arrdel(map, size);
	map = (char**)malloc(sizeof(char*) * (size + 2));
	i = 0;
	j = 0;
	while (i <= size)
	{
		str = (char*)malloc(sizeof(char) * size + 2);
		while (j <= size)
			str[j++] = '.';
		str[j] = '\0';
		map[i++] = str;
		j = 0;
	}
	map[i] = 0;
	return (map);
}
