/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:52:00 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/02 02:26:07 by jinchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_free1(int **map)
{
	int	i;

	i = -1;
	while (map[++i])
		free(map[i]);
	free(map);
}
