/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_saver.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:40:36 by mnosko            #+#    #+#             */
/*   Updated: 2017/12/18 16:48:53 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static char	*ft_figure(char *str, char c, int i)
{
	char	*fig;
	int		j;

	if ((fig = (char*)malloc(sizeof(char) * 13)) == NULL)
		return (0);
	j = 0;
	fig[i++] = c;
	while (str[j])
	{
		if (str[j] == '.' && ((str[j + 5] == '#' && j < 16) ||
			(str[j - 5] == '#' && j > 4) || (str[j + 10] == '#' && j < 11) ||
			(str[j - 10] == '#' && j > 9)) && (str[j + 1] == '#' ||
				str[j + 2] == '#') && str[j + 3] != '#')
		{
			fig[i++] = str[j++];
			continue ;
		}
		if (str[j] == '#')
			fig[i++] = str[j];
		if (str[j] == '\n' && fig[i - 1] == '#')
			fig[i++] = str[j];
		j++;
	}
	fig[i - 1] = '\0';
	return (&fig[0]);
}

char		**ft_split_figure(char *arr, int size, int i)
{
	char	**figures;
	int		snc;
	char	*tmp;
	char	c;

	if ((figures = (char**)malloc(sizeof(char*) * size + 1)) == NULL)
		return (0);
	snc = 0;
	tmp = arr;
	c = 'A';
	while (*arr++)
	{
		if (*arr == '\n')
			snc++;
		if (snc == 4)
		{
			figures[i++] = ft_figure(ft_strsub(tmp, 0, 20), c, 0);
			snc = 0;
			++arr && ++c;
			tmp = ++arr;
		}
	}
	figures[i] = NULL;
	return (&figures[0]);
}
