/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:13:56 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/02 01:29:50 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		**read_map(char *argv, char *objects, int *row);
void	map_print(int **map);
//int		**self_create_map();
void	ft_free1(int **map);
void	print_square(int **arr, int col_max, int row_max);
void	print_origin_square(int **arr, int col_max, int row_max);
int		find_max_square(int **arr, int col_max, int row_max);
void	find_max_location(int **arr, int col_max, int row_max, int max);
void	change_square(int **arr, int col_max, int row_max, int i, int j, int max);

void	execute_df(void)
{
	print_origin_square(array, y, x);
 	print_square(array, y, x);
	max = find_max_square(array, y, x);
	find_max_location(array, y, x, max);
}

int	main(int argc, char **argv)
{
	int		i;
	int		**array;
	char	*aaa;
	char	*objects;
	int		row;
	int		max;
	int		x;
	int		y;

	x = 27;
	y = 9;
	i = 0;
	array = 0;
	objects = 0;
	while (argc > ++i)
	{
		array = read_map(argv[i], objects, &row);
		if (array == 0)
		{
			write(1, "map error\n", 10);
			return (0);
		}
		execute_df();
		ft_free1(map);
		free(objects);
	}
	return (0);
}
