/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:19:02 by mnosko            #+#    #+#             */
/*   Updated: 2017/12/15 13:30:31 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "libft/libft.h"

int	main(int argc, char *argv[])
{
	char	*arr;
	char	**result;
	int		i;

	i = 0;
	if (argc <= 1 || argc > 2)
	{
		ft_putstr("Usage: ./fillit source_file\n");
		return (0);
	}
	arr = ft_read_file(argv[1]);
	if (!ft_all_valid_check(arr))
	{
		write(1, "error\n", 6);
		return (0);
	}
	result = ft_fill_map(ft_map(arr), ft_split_figure(arr, ft_fig_cnt(arr), 0));
	while (result[i] != '\0')
	{
		ft_putstr(result[i++]);
		ft_putchar('\n');
	}
	ft_arrdel(result, ft_strlen(result[0]));
	ft_strdel(&arr);
	return (0);
}
