/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:33:59 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/28 01:25:50 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	collector(int count_a, int count_d, int length)
{
	int		i;

	i = length;
	if (i == (count_a + 1) || i == (count_d + 1) || i == 1 || i == 0)
		return (1);
	else
		return (0);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		count_ascend;
	int		count_descend;
	int		len;

	i = 0;
	len = length;
	count_ascend = 0;
	count_descend = 0;
	while (i < len - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
				count_ascend++;
		else if (f(tab[i], tab[i + 1]) > 0)
				count_descend++;
		else if (f(tab[i], tab[i + 1]) == 0)
		{
			count_ascend++;
			count_descend++;
		}
		i++;
	}
	return (collector(count_ascend, count_descend, len));
}
/*
int ft_cmp(int n1, int n2)
{
	return (n1 - n2);
}

#include <stdio.h>


int main(void)
{
	int nums[] = {0};

	printf("%d", ft_is_sort(nums, 0, &ft_cmp));
}*/
