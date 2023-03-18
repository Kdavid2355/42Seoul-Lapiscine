/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minwucho <minwucho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:10:43 by minwucho          #+#    #+#             */
/*   Updated: 2023/03/02 02:36:26 by jinchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# define BUFF_SIZE 16711568

int		ft_row_len(char *str);
int		ft_row_atoi(char *str);
char	*ft_objects_atoi(char *str);
int		**map_malloc(char *buff, int *row);
char	*objects_error(char *objects, int *row);
char	*make_objects(char *buff, int *row);
int		**make_map(int **map, char *buff, char *objects, int *row);
int		**read_map(char *argv, char *objects, int *row);
void	change_square(int **arr, int col_max, int row_max, int i, int j, int max);
void	find_max_location(int **arr, int col_max, int row_max, int max);
int		find_max_square(int **arr, int col_max, int row_max);
void	print_origin_square(int **arr, int col_max, int row_max);
void	print_square(int **arr, int col_max, int row_max);
void	ft_free1(int **map);
void	map_print(int **map);
int		ft_row_len(char *str);
int		ft_row_atoi(char *str);
char	*ft_objects_atoi(char *str);
int		make_map_suv1(int i, int l, char *objects, char *buff);
int		**map_malloc_suv(int *row, int **map, char *buff, int i);

#endif
