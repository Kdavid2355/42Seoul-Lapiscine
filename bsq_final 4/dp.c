/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:14:54 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/02 02:47:52 by jinchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	change_square(int **arr, int col_max, int row_max, int i, int j, int
		max)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (a < col_max)
	{
		b = 0;
		while (b < row_max)
		{
			if (arr[a][b] == 0)
				write(1, "o", 1);
			else if (((j - max +1 <= b) && (b <= j)) && \
					(((i - max + 1) <= a) && (a <= i)))
				write(1, "x", 1);
			else
				write(1, ".", 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
}

void	find_max_location(int **arr, int col_max, int row_max, int max)
{
	int		i;
	int		j;
	int		flag;

	flag = 0;
	i = 0;
	while (i < col_max)
	{
		j = 0;
		while (j < row_max)
		{
			if (max == arr[i][j])
			{
				change_square(arr, col_max, row_max, i, j, max);
				flag = 1;
				break ;
			}
			j++;
		}
		if (flag == 1)
			break ;
		i++;
	}
}

int	find_max_square(int **arr, int col_max, int row_max)
{
	int		i;
	int		j;
	int		max;

	max = 0;
	i = 0;
	j = 0;
	while (i < col_max)
	{
		j = 0;
		while (j < row_max)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
			j++;
		}
		i++;
	}
	return (max);
}

int	return_min(int a, int b, int c)
{
	int	min;

	if (a > b)
		min = b;
	else
		min = a;
	if (min > c)
		min = c;
	return (min);
}

void	print_square(int **arr, int col_max, int row_max)
{
	int		i;
	int		j;
	int		min;

	i = 1;
	while (i < col_max)
	{
		j = 1;
		while (j < row_max)
		{
			if (arr[i][j] == -1)
				arr[i][j] = 0;
			if (arr[i][j] != 0)
			{
				min = return_min(arr[i - 1][j - 1], \
						arr[i - 1][j], arr[i][j - 1]);
				arr[i][j] = min + 1;
			}
			j++;
		}
		i++;
	}
}
