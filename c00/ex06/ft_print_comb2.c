/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 09:38:01 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/11 12:59:49 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	last_count(void)
{
	write(1, "98", 2);
	write(1, " ", 1);
	write(1, "99", 2);
}

void	zero_print(int a, int b)
{
	char	s1;
	char	s2;
	char	s3;
	char	s4;

	s1 = a / 10 + '0';
	s2 = a % 10 + '0';
	s3 = b / 10 + '0';
	s4 = b % 10 + '0';
	write(1, &s1, 1);
	write(1, &s2, 1);
	write(1, " ", 1);
	write(1, &s3, 1);
	write(1, &s4, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 97)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b)
			{
				zero_print(a, b);
			}
			b++;
		}
		a++;
		if (a == 98)
		{
			last_count();
		}
	}
}
/*
int	main(void){
	ft_print_comb2();
	return 0;
}*/
