/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:40:47 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/12 15:00:11 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	line_put(int a, char A, char B, char C)
{
	int		x;

	x = 1;
	while (x <= a)
	{
		if (x == 1)
		{
			ft_putchar(A);
			x++;
		}	
		else if (x == a)
		{
			ft_putchar(C);
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
		if (line_change == 1)
		{
			line_put(a, '/', '*', '\\');
		}
		else if (line_change == b)
		{
			line_put(a, '\\', '*', '/');
		}
		else
		{
			line_put(a, '*', ' ', '*');
		}
		line_change++;
	}
}
