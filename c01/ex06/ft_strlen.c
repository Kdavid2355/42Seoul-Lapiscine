/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:02:16 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/12 14:13:20 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	len_char = len + '0';
	return (len);
}
/*
int		main(void)
{
	char *sentence;


	sentence = "hello world";
	ft_strlen(sentence);
}*/
