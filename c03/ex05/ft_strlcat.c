/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:43:41 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/18 12:02:03 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	count_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = count_len(dest);
	src_len = count_len(src);
	if ((size <= dest_len) || (size == 0))
		return (size + src_len);
	else
	{
		i = 0;
		while (dest[i])
			i++;
		j = 0;
		while ((src[j] != '\0') && (j < size - dest_len - 1))
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = '\0';
		return (dest_len + src_len);
	}
}
