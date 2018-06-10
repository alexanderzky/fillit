/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_true_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 13:17:01 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 15:48:18 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*ft_plus(char *arr, int *v_check, int *count, int plus)
{
	*count = *count + 1;
	*v_check = *v_check == 0 ? 0 : 1;
	return (&*(arr + plus));
}

static char	*if_minus_one(char *arr, int *count, int val, int *v_check)
{
	arr--;
	*v_check = *v_check + 1;
	if (*v_check > val)
		*count = *count + 1;
	return (arr);
}

static char	*ft_plus_plus(char *arr, int *count, int *val)
{
	arr++;
	*count = *count + 1;
	*val = *val + 1;
	return (arr);
}

static char	*if_not_minus_one(char *arr, int *ret_val, int v_check)
{
	*ret_val = 0;
	return (&*(arr + v_check));
}

char		*ft_true_check(char *arr, int h_check, int v_check, int *ret_val)
{
	int count;
	int val;

	count = 1;
	val = 0;
	while (count != 4)
		if (*(arr + 1) == '#' && v_check == 0)
			arr = ft_plus_plus(arr, &count, &val);
		else if ((*(arr + 1)) != '#' || v_check > 0)
		{
			if (*(arr + 4) == '#' && h_check == 0 && *(arr + 3) != '#'
				&& v_check == 0 && *(arr + 5) == '#')
				arr = ft_plus(arr, &v_check, &count, 4);
			else if (*(arr + 5) == '#' && h_check == 0)
				arr = ft_plus(arr, &v_check, &count, 5);
			else if (*(arr - 1) == '#')
				arr = if_minus_one(arr, &count, val, &v_check);
			else if (*(arr - 5) == '#' && h_check == 0)
				h_check = 1;
			else if (*(arr - 1) != '#')
				return (if_not_minus_one(arr, ret_val, v_check));
		}
	arr = &*(arr + v_check);
	*ret_val = 1;
	return (arr);
}
