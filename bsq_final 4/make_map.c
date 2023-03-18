/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:06:29 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/02 03:05:54 by jinchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_row_len(char *str);

int	make_map_suv1(int i, int l, char *objects, char *buff)
{
	int	z;

	z = l + 2;
	while (++l <= z)
	{
		if (buff[i] == objects[l] || buff[i] == '\n')
			return (1);
	}
	return (0);
}

void	make_map_suv2(char buff, char *objects, int *map)
{
	if (buff == *objects)
		*map = 1;
	else if (buff == *(objects + 1))
		*map = -1;
}

int	**make_map(int **map, char *buff, char *objects, int *row)
{
	int	i;
	int	j;
	int	k;
	int	flag;

	i = 0;
	j = 0;
	k = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	while (j < *row && buff[++i])
	{
		flag = make_map_suv1(i, ft_row_len(objects) - 1, objects, buff);
		if (!(flag))
			return (0);
		if (map[j] != 0)
			make_map_suv2(buff[i], objects + ft_row_len(objects), map[i] + k);
		k++;
		if (buff[i + 1] == '\n')
		{
			i++;
			j++;
			k = 0;
		}
	}
	return (map);
}

int	**read_map(char *argv, char *objects, int *row)
{
	int		fd;
	char	buff[BUFF_SIZE];
	int		**re;

	fd = open(argv, O_RDWR);
	if (0 < fd)
	{
		read(fd, buff, BUFF_SIZE);
		close(fd);
	}
	objects = make_objects(buff, row);
	if (objects == 0)
		return (0);
	re = map_malloc(buff, row);
	if (re == 0)
		return (0);
	re = make_map(re, buff, objects, row);
	if (re == 0)
		return (0);
	return (re);
}
