/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:13:56 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/01 23:47:40 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		**read_map(char *argv/*, int **map*/, char *objects, int *row);
void	map_print(int **map);
int		**self_create_map();
void	ft_free1(int **map);
//void	map_search(char **map, char *objects);

int	main(int argc, char **argv)
{
	int		i;
	int		**map;
	char	*objects;
	int		row;

	i = 0;
	map = 0;
	objects = 0;
//	if (argc == 1)
//		map = self_create_map();
	while (argc > ++i)
	{
		map = read_map(argv[i]/*, map*/, objects, &row);
		if (map == 0)//map, objects를 보내 받아온후 리턴값으로 오류 체크{ex) map == 0일경우 오류, objects == 0 일경우 오류
		{
			write(1, "map error\n", 10);
			return (0);
		}
		if (map == 0)
			printf("aaa");
		else
			printf("bbb");
		map_print(map);
		printf("%d",map[2][5]);
		//map_search(map, objects);
		ft_free1(map);
		free(objects);
	}
	return (0);
}
