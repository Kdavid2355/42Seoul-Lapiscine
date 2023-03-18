/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subfuc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinchang <jinchang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:53:59 by jinchang          #+#    #+#             */
/*   Updated: 2023/03/01 22:36:01 by jinchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_row_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ((str[i] >= '0' && str[i] <= '9')))
		i++;
	return (i);
}

int	ft_row_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] && ((str[i] >= '0' && str[i] <= '9')))
	{
		result = str[i] - '0' + result * 10;
		i++;
	}
	return (result);
}

char	*ft_objects_atoi(char *str)
{
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
	{
		str++;
		free(str - 1);
	}
	return (str);
}
