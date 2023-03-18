/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:14:53 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/25 16:08:48 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		len;
	int		i;
	int		*nums;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	nums = (int *)malloc(sizeof(int) * len);
	if (!nums)
		return (-1);
	i = 0;
	*range = nums;
	while (i < len)
	{
		nums[i] = min + i;
		i++;
	}
	return (len);
}
