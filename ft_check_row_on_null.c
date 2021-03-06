/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row_on_null.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:27:30 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/13 12:59:39 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_row_on_null(char **map, int line, int row)
{
	if (map[line][row + 1] != '\0')
		return (1);
	return (0);
}
