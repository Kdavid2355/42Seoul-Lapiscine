/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:40:56 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/23 12:14:47 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include "stdlib.h"

int	count_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*arr;
	int		i;

	i = 0;
	len = count_len(str);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (0);
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	arr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].size = count_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
/*
#include <stdio.h>
int main(int ac, char **ag)
{	
	int i;

	struct s_stock_str *array;
	array = ft_strs_to_tab(ac, ag);

	i = 0;
	while (i < ac)
	{
		printf("%s, %p\n", array[i].str, array[i].str);
		printf("%s, %p\n", array[i].copy, array[i].copy);
		printf("%d\n", array[i].size);
		i++;
	}
}*/
