/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makemap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:52:00 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/01 23:59:46 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#define BUFF_SIZE 1024

int		ft_row_len(char *str);
int		ft_row_atoi(char *str);
char	*ft_objects_atoi(char *str);

int	**map_malloc(char *buff, int *row)
{
	int		i;
	int		j;
	int		**map;
	int		len;
	int		mlen;

	map = (int **)malloc(sizeof(int *) * *row);
	if (map == 0)
		return (0);
	i = -1;
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
		if (map[i - 1] == 0 && i > 0)
			return (0);
	}
	return (map);
}

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

int	**make_map(int **map, char *buff, char *objects, int *row)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	flag;
	int	z;

	i = 0;
	j = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	while (j < *row && buff[++i])
	{
		k = 0;
		l = ft_row_len(objects) - 1;
		z = l + 2;
		while (++l <= z)
		{
			flag = 0;
			if (buff[i] == objects[l] || buff[i] == '\n')
			{
				flag = 1;
				break ;
			}
		}
		l = ft_row_len(objects);
		if (buff[i] == objects[l])
		{
			*(map[j] + k) = -1;
			printf("%d",map[j][k]);
		}
		else if (buff[i] == objects[l + 1])
		{
			*(map[j] + k) = 0;
			printf("%d",map[j][k]);
		}
		k++;
		if (buff[i + 1] == '\n')
		{
			i++;
			j++;
			printf("\n");
		}
	}
	if (!(flag))
		return (0);
	return (map);
}

int	**read_map(char *argv/*, int **map*/, char *objects, int *row)
{
	int		fd;
	char	buff[BUFF_SIZE];
	int		**re;

	if (0 < (fd = open(argv, O_RDWR)))// 파일을 읽고 쓰기 전용으로 열기
	{
		read(fd, buff, BUFF_SIZE); // 파일을 읽음
		close(fd); // 파일 닫음
	}
	objects = make_objects(buff, row); // 오브젝트 종류 저장 (char)
	if (objects == 0)
		return (0);
	re = map_malloc(buff, row); // buff를 이용해 map에 메모리 할당
	if (re == 0)
		return (0);
	re = make_map(re, buff, objects, row);
	if (re == 0)
		return (0);
	return (re);
}
