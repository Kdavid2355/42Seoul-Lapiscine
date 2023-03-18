/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:08:05 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/12 12:20:38 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int		temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int main(void) {
	int num1;
	int num2;
	
	num1 = 200;
	num2 = 7;
	ft_ultimate_div_mod(&num1, &num2);
	printf("%d, %d", num1, num2);
}*/
