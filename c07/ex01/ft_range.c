/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:08:26 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/25 16:04:09 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*nums;
	int		len;
	int		n;

	n = 0;
	len = max - min;
	if (min >= max)
		return (0);
	nums = (int *)malloc(sizeof(int) * (len));
	if (!nums)
		return (0);
	while (n < len)
	{
		nums[n] = min + n;
		n++;
	}
	return (nums);
}
