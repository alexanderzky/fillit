/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnosko <mnosko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:23:34 by mnosko            #+#    #+#             */
/*   Updated: 2017/10/24 16:50:16 by mnosko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;
	int div;

	result = nb;
	div = nb;
	if (nb <= 0)
		return (0);
	while (nb)
	{
		div = (nb / div + div) / 2;
		if (result > div)
			result = div;
		else if (result * result == nb)
			return (result);
		else
			return (0);
	}
	return (0);
}
