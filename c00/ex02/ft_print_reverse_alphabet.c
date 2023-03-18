/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:20:24 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/09 17:23:01 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;
	char	m;

	m = 0;
	i = 122;
	while (m <= 25)
	{
		i = 122 - m;
		write(1, &i, 1);
		m = m + 1;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
}*/
