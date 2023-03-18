/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:39:35 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/27 18:01:23 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
    int i;
    char *tab[7];
    i = 0;
    tab[0] = "dog";
    tab[1] = "tiger";
    tab[2] = "melon";
    tab[3] = "monster";
    tab[4] = "kitty";
    tab[5] = "world";
    tab[6] = 0;

    while (tab[i] != NULL)
    {
        printf("tab[%d] <@ %p> = $%s$\n", i, tab + i, tab[i]);
        i++;
    }
    printf("%d", 1);
    ft_sort_string_tab(tab);
    printf("\n");
    i = 0;
    while (tab[i] != NULL)
    {
        printf("tab[%d] <@ %p> = $%s$\n", i, tab + i, tab[i]);
        i++;
    }
    return (0);
}*/
