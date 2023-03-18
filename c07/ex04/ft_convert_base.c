/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:25:33 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/22 13:07:34 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	count_len(int nbr, char *base, int len);
int	check_base(char *str);
int	ft_strlen(char *str);

int	ch_base(char str, char *base)
{
	int	n;

	n = 0;
	while (base[n] != '\0')
	{
		if (str == base[n])
			return (n);
		n++;
	}
	return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] != '\0') && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

void	ft_putnbr_base(int nbr, char *base, char *ans)
{
	int		base_len;
	long	num;
	int		i;
	int		ans_len;

	base_len = ft_strlen(base);
	ans_len = count_len(nbr, base, 0);
	num = nbr;
	i = 0;
	if (num < 0)
	{
		ans[0] = '-';
		num *= -1;
		i = 1;
	}
	ans_len--;
	while (num >= base_len)
	{
		ans[ans_len] = base[num % base_len];
		num /= base_len;
		ans_len--;
	}
	if (num < base_len)
		ans[i] = base[num];
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	num1;
	int	num2;
	int	base_len;

	num1 = 0;
	i = 0;
	base_len = check_base(base);
	if (base_len >= 2)
	{
		sign = whitespaces(str, &i);
		num2 = ch_base(str[i], base);
		while (num2 != -1)
		{
			num1 = (num1 * base_len) + num2;
			i++;
			num2 = ch_base(str[i], base);
		}
		return (num1 *= sign);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ans;
	int		ans_10;
	int		ans_len;

	if (check_base(base_to) == 0 || check_base(base_from) == 0)
		return (0);
	ans_10 = ft_atoi_base(nbr, base_from);
	ans_len = count_len(ans_10, base_to, 0);
	ans = (char *)malloc(sizeof(char) * (ans_len + 1));
	if (!ans)
		return (0);
	ft_putnbr_base(ans_10, base_to, ans);
	ans[ans_len] = '\0';
	return (ans);
}
