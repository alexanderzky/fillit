/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fig_cnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:10:09 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 17:10:31 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fig_cnt(char *arr)
{
	int snc;
	int size;

	snc = 0;
	size = 0;
	while (*arr)
	{
		if (*arr == '\n')
			snc++;
		if (snc == 4)
			size++;
		if (snc == 5)
			snc = 0;
		arr++;
	}
	return (size);
}
