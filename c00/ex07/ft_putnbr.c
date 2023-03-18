/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:05:18 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/12 10:12:23 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		k;

	if (nb == -2147483638)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
	}
	k = nb % 10 + '0';
	write(1, &k, 1);
}
/*
int		main(void){
	ft_putnbr(12346);
	write(1,"\n",1);
	ft_putnbr(-12345);
}*/
