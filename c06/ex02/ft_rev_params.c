/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:01:23 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/21 09:21:30 by beomjuki         ###   ########.fr       */
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

int	main(int ac, char **ag)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i <= ac / 2)
	{
		temp = ag[ac - i];
		ag[ac - i] = ag[i];
		ag[i] = temp;
		i++;
	}
	while (j < ac)
	{
		print_len(ag[j]);
		j++;
	}
}
