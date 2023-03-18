/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:49:14 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/20 11:56:41 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int		ans;

	ans = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ans *= nb;
		nb--;
	}
	return (ans);
}
