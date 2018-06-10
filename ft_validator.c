/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:40:36 by mnosko            #+#    #+#             */
/*   Updated: 2017/12/18 14:25:45 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	ft_symbol_check(char *arr)
{
	int count;

	count = 0;
	while (*arr != '\0')
	{
		if (*arr != '#' && *arr != '.' && *arr != '\n')
			return (0);
		if ((*arr != '\n') && count == 20)
			return (0);
		else if (count == 21)
		{
			count = 0;
			continue;
		}
		arr++;
		count++;
	}
	if (count != 20)
		return (0);
	return (1);
}

static int	ft_tag_check(char *arr)
{
	int tag;

	tag = 0;
	while (*arr)
	{
		if (*arr == '#')
			tag++;
		if (*arr == '\n' && *(arr + 1) == '\n')
		{
			if (tag != 4)
				return (0);
			else
			{
				tag = 0;
				arr++;
				continue ;
			}
		}
		arr++;
	}
	return (1);
}

static int	ft_slash_n_check(char *arr)
{
	int snc;
	int symb;

	snc = 0;
	symb = 0;
	while (*arr)
	{
		if (*arr == '\n')
			snc++;
		if (*arr == '.' || *arr == '#')
			symb++;
		if (snc == 5 && *(arr + 1) == '\n' && symb < 16)
			return (0);
		else if (snc == 5 && *(arr + 1) != '\n')
		{
			snc = 0;
			symb = 0;
		}
		arr++;
	}
	return (1);
}

static int	ft_true_figure_check(char *arr)
{
	int count;

	count = -1;
	while (*arr)
	{
		if (*arr == '#' && count == -1)
		{
			arr = ft_true_check(arr, 0, 0, &count);
			arr += (count == 1) ? 1 : 0;
		}
		if (count == 1 && *arr == '#')
			return (0);
		if (count == 0)
			return (0);
		if (*arr == '\n' && *(arr + 1) == '\n')
		{
			if (count == -1)
				return (0);
			count = -1;
		}
		arr++;
	}
	if (*arr == '\0' && count == -1)
		return (0);
	return (1);
}

int			ft_all_valid_check(char *arr)
{
	if (ft_symbol_check(arr) == 0
		|| ft_slash_n_check(arr) == 0
		|| ft_tag_check(arr) == 0
		|| ft_true_figure_check(arr) == 0
		|| ft_fig_cnt(arr) > 26)
		return (0);
	return (1);
}
