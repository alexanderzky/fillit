/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:15:21 by ozalisky          #+#    #+#             */
/*   Updated: 2017/12/18 14:21:49 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_UTILS_H
# define FILLIT_UTILS_H
# include <unistd.h>

int		ft_all_valid_check(char *arr);
char	**ft_split_figure(char *arr, int size, int i);
char	**ft_map(char *arr);
int		ft_fig_cnt(char *arr);
char	*ft_read_file(char *file_path);
char	**ft_fill_map(char **square, char **figures);
int		ft_min_size(char *arr);
int		ft_sqrt(int nb);
char	**ft_map_resize(char **map);
int		ft_put_figure(char **map, char *blocks);
void	ft_clean_map_d_dot_r_point(char **map, int *line, int *row, char c);
void	ft_clean_map_check(char **map, int *line, int *row, char *figures);
void	ft_clean_map_return_point(char **map, int *line, int *row, char c);
void	ft_clean_map_dot_r_point(char **map, int *line, int *row, char c);
void	ft_clean_map_add_mark(char **map, char c);
int		ft_check_row_on_null(char **map, int line, int row);
int		ft_check_line_on_null(char **map, int line);
void	ft_clean_map(char **map, char c);
void	ft_check_mark(char **square, int *line, int *row, char *figures);
int		ft_bs(char *figures, int figures_i);
int		ft_length(char **map);
int		ft_r_point(int l_line, int l_row, int *line, int *row);
void	ft_r_point_row_1(int l_line, int l_row, int *line, int *row);
void	ft_r_point_line_p1(int l_line, int *line, int *row);
int		ft_length(char **map);
void	ft_r_point_row_p1(int l_line, int l_row, int *line, int *row);
int		ft_inner(int **v, char **map, char *blocks);
int		ft_inn_put(int **v, char **map, const char *blocks);
int		ft_put_bl(int **v, char **map, char *blocks);
void	ft_bl_mv(int **v, char **map, char *blocks);
int		ft_bl_sw(int **v, char **map, char *blocks);
int		ft_dd(char *blocks);
char	*ft_true_check(char *arr, int h_check, int v_check, int *ret_val);

#endif
