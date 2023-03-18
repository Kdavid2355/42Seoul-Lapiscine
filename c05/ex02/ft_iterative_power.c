/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:02:52 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/20 11:59:20 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int		cnt;
	int		ans;

	ans = 1;
	cnt = 0;
	if (power < 0)
		return (0);
	if ((power == 0) && (nb == 0))
		return (1);
	while (cnt < power)
	{
		ans *= nb;
		cnt++;
	}
	return (ans);
}
