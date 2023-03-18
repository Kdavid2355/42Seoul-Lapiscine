/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:07:23 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/02 03:05:36 by jinchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	**map_malloc_suv(int *row, int **map, char *buff, int i)
{
	int		j;
	int		len;
	int		mlen;

	j = 0;
	while (++i <= *row)
	{
		len = 0;
		while (buff[j] && buff[j] != '\n')
		{
			len++;
			j++;
		}
		if (len == 0)
			return (0);
		if (i == 1)
			mlen = len;
		if (i > 1 && mlen != len)
			return (0);
		j++;
		if (i > 0)
			map[i - 1] = (int *)malloc(sizeof(int) * (len));
	}
	return (map);
}

int	**map_malloc(char *buff, int *row)
{
	int		**map;

	map = (int **)malloc(sizeof(int *) * *row);
	if (map == 0)
		return (0);
	map = map_malloc_suv(row, map, buff, -1);
	if (map == 0)
		return (0);
	return (map);
}
