/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_objects.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 02:06:55 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/02 02:29:07 by jinchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*objects_error(char *objects, int *row)
{
	int	i;
	int	cnt;

	objects = ft_objects_atoi(objects);
	cnt = ft_row_len(objects);
	*row = ft_row_atoi(objects);
	while (objects[cnt + 1])
	{
		i = cnt + 1;
		while (objects[i])
		{
			if (objects[cnt++] == objects[i++])
				return (0);
		}
	}
	return (objects);
}

char	*make_objects(char *buff, int *row)
{
	char	*objects;
	int		i;

	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	objects = (char *)malloc(sizeof(char) * (i + 1));
	if (!(objects))
		return (0);
	i = 0;
	while (buff[i] && buff[i] != '\n')
	{
		objects[i] = buff[i];
		i++;
	}
	objects[i] = '\0';
	objects = objects_error(objects, row);
	if (objects == 0)
		return (0);
	return (objects);
}
