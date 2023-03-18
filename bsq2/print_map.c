/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:28:22 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/01 23:47:00 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	map_print(int **map)
{
	int		i;
	int		j;
	//char	a;

	i = 0;
	while (i < 30)
	{
		j = 0;
		while (j< 30)
		{
			printf("%d",map[i][j]);
			//a = map[i][j] + 48;
			//printf("%c",a);
			//write(1, &a, 1);
			j++;
		}
		i++;
		printf("\n");
		//write(1, "\n", 1);
	}
	fflush(stdout);
}
