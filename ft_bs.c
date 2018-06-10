/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:56:30 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 16:57:09 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_bs(char *figures, int figures_i)
{
	int i;

	i = 0;
	--figures_i;
	while (figures[figures_i] != '\n' && figures_i != 1)
	{
		--figures_i;
	}
	if (figures_i != 1)
		figures_i++;
	while (figures[figures_i] != '\n')
	{
		++i;
		++figures_i;
	}
	return (i - 1);
}
