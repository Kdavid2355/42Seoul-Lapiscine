/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:17:35 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/19 20:59:09 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 43 || base[i] == 45 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	whitespaces(char *str, int *ptr)
{
	int		sign;
	int		i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*ptr = i;
	return (sign);
}

int	ch_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		num1;
	int		num2;
	int		len;

	num1 = 0;
	i = 0;
	len = check_base(base);
	if (len >= 2)
	{
		sign = whitespaces(str, &i);
		num2 = ch_base(str[i], base);
		while (num2 != -1)
		{
			num1 = (num1 * len) + num2;
			i++;
			num2 = ch_base(str[i], base);
		}
		return (num1 * sign);
	}
	return (0);
}
