/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:59:36 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/26 11:09:46 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, &ft_putnbr);
}
#include <unistd.h>
void ft_putnbr(int k)
{
	int i;

	i = k;
	i += '0';
	write(1, &i, 1);
}*/
