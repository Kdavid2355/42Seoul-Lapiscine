/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:46:20 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/25 21:07:59 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

int	count_len(char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	cal_size(int size, char **str, char *sep)
{
	int		str_len;
	int		sep_len;
	int		i;

	i = 0;
	str_len = 0;
	sep_len = count_len(sep);
	while (i < size)
	{
		str_len += count_len(str[i]);
		if (!(i == size - 1))
			str_len += sep_len;
		i++;
	}
	return (str_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*str;
	int		i;

	len = cal_size(size, strs, sep);
	if (size == 0)
	{
		str = (char *)malloc(sizeof(char) * 1);
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < size)
	{
		ft_strcpy(str, strs[i]);
		str += count_len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(str, sep);
			str += count_len(sep);
		}
		i++;
	}
	*str = '\0';
	return (str - len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 4;
	strs = (char **)malloc(4 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 10 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 9 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 9 + 1);
	strs[3] = (char *)malloc(sizeof(char) * 9 + 1);
	strs[0] = "hello";
	strs[1] = "I want todfas";
	strs[2] = "go home";
	strs[3] = "funck";
	separator = " 1234 ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/
