/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:34:25 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/19 19:33:56 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

int	check_base(char *str)
{
	int	l;
	int	i;

	l = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[l] != '\0')
	{
		if (str[l] <= 32 || str[l] == 127 || str[l] == 43 || str[l] == 45)
			return (0);
		i = l + 1;
		while (str[i] != '\0')
		{
			if (str[l] == str[i])
				return (0);
			i++;
		}
		l++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;

	len = check_base(base);
	if (len > 1)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putnbr_base((nbr / len) * -1, base);
			ft_putchar(base[(nbr % len) * -1]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(-nbr, base);
		}
		else if (nbr >= len)
		{
			ft_putnbr_base((nbr / len), base);
			ft_putnbr_base((nbr % len), base);
		}
		else
			ft_putchar(base[nbr]);
	}
	return ;
}
