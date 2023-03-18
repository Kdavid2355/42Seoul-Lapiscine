/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:40:47 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/12 14:59:43 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	line_put(int a, char A, char B)
{
	int		x;

	x = 1;
	while (x <= a)
	{
		if (x == 1 || x == a)
		{
			ft_putchar(A);
			x++;
		}	
		else
		{		
			ft_putchar(B);
			x++;
		}
	}	
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int		line_change;

	line_change = 1;
	while (line_change <= b)
	{
		if (line_change == 1 || line_change == b)
		{
			line_put(a, 'o', '-');
		}
		else if (line_change < b)
		{
			line_put(a, '|', ' ');
		}
		line_change++;
	}
}
