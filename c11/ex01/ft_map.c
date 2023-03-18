/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:11:16 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/26 11:27:55 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*ans;

	i = 0;
	ans = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		ans[i] = f(tab[i]);
		i++;
	}
	return (ans);
}
/*
#include <stdio.h>
int main(void)
{
	int nums[5] = {1, 2, 3, 4, 5};
	int *ans;
	ans = ft_map(nums, 5, &ft_sqrt);
	
	for(int i=0; i<5; i++)
	{
		printf("%d", ans[i]);
	}

int ft_sqrt(int k)
{
	return k*k;
}


}*/
