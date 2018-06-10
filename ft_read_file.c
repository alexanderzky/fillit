/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:31:06 by ozalisky          #+#    #+#             */
/*   Updated: 2018/01/15 14:30:24 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft/libft.h"
#define BUF_SIZE 1024

char	*ft_read_file(char *file_path)
{
	int		fd;
	int		ret;
	char	*buf;

	if ((buf = ft_strnew(BUF_SIZE)) == NULL)
		exit(0);
	if ((fd = open(file_path, O_RDONLY)) <= 0)
		exit(0);
	while ((ret = (read(fd, buf, BUF_SIZE))))
	{
		if (ret < 0)
			exit(0);
		buf[ret] = '\0';
	}
	if (ret < 0)
		exit(0);
	if (close(fd) == -1)
		exit(0);
	return (buf);
}
