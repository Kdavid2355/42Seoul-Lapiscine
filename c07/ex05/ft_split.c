/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:17:50 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/25 18:42:47 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_array(char *str, char *charset)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (is_in(str[i], charset) == 1))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && (is_in(str[i], charset) == 0))
			i++;
	}
	return (count);
}

int	count_word(char *str, char *charset)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && (is_in(str[i], charset) == 0))
		i++;
	return (i);
}

char	*make_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = count_word(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;
	int		j;

	i = 0;
	j = 0;
	array = (char **)malloc(sizeof(char *) * (count_array(str, charset) + 1));
	while (str[i])
	{
		while (str[i] && (is_in(str[i], charset) == 1))
			i++;
		if (str[i] != '\0')
		{
			array[j] = make_word(&str[i], charset);
			j++;
		}
		while (str[i] && (is_in(str[i], charset) == 0))
			i++;
	}
	array[j] = 0;
	return (array);
}
