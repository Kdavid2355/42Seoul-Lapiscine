/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:02:31 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/20 21:37:12 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_len(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int ac, char **ag)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 1;
	k = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac - i)
		{
			if (ft_strcmp(ag[j], ag[j + 1]) >= 0)
				swap(&ag[j + 1], &ag[j]);
			j++;
		}
		i++;
	}
	while (k < ac)
	{
		print_len(ag[k]);
		k++;
	}
}
