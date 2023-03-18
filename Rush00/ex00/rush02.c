/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeojang <jeojang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:43:44 by jeojang           #+#    #+#             */
/*   Updated: 2023/02/12 15:00:32 by beomjuki         ###   ########.fr       */
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
		if (line_change == 1)
		{
			line_put(a, 'A', 'B');
		}
		else if (line_change < b)
		{
			line_put(a, 'B', ' ');
		}
		else
		{
			line_put(a, 'C', 'B');
		}
		line_change++;
	}
}
