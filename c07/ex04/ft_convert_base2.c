/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:20:02 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/22 12:42:37 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ch_base(char str, char *base);
int	whitespaces(char *str, int *ptr_i);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	count_len(int nbr, char *base, int len)
{
	int				base_len;
	unsigned int	num;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		num = nbr * -1;
		len++;
	}
	else
		num = nbr;
	while (num >= (unsigned)base_len)
	{
		num /= base_len;
		len++;
	}
	len++;
	return (len);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
			|| str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}
