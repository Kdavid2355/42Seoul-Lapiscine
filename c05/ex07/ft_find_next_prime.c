/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:13:45 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/22 18:24:10 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long long	n;
	long long	ans;

	n = 0;
	ans = 0;
	while (n * n <= nb)
	{
		ans = n;
		n++;
	}
	return (ans);
}

int	collect_prime(int nb)
{
	int		n;
	int		ans;

	ans = ft_sqrt(nb);
	n = 2;
	while (n < ans)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int		res;

	if (nb <= 1)
		return (2);
	while (1)
	{	
		res = collect_prime(nb);
		if (res == 1)
			break ;
		nb += 1;
	}
	return (nb);
}
