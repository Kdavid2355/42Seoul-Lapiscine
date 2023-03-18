/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:30:10 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/28 13:21:48 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			len++;
		i++;
	}
	return (len);
}
