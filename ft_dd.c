/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 18:31:00 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/15 12:39:26 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_dd(char *blocks)
{
	if (blocks[1] == '.' && blocks[2] == '.')
		return (1);
	return (0);
}
