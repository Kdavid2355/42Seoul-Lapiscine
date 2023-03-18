/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:16:04 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/28 17:09:28 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_nums(char *nums)
{
	int		i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(nums[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	is_valid(int value, char *str, int index)
{
	int		i;

	if (index == 0)
		return (1);
	i = 0;
	while (i < index)
	{
		if (str[i] == value)
			return (0);
		i++;
	}
	i = 0;
	while (i < index)
	{
		if ((index - i) == (value - str[i]) || (i - index) == (value - str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_recur(char *nums, int *cnt, int i)
{
	int		value;

	value = 0;
	if (i == 10)
	{
		(*cnt)++;
		print_nums(nums);
	}
	while (value <= 9)
	{
		if (is_valid(value, nums, i))
		{
			nums[i] = value;
			ft_recur(nums, cnt, i + 1);
		}
		value++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	arr[11];
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (i < 10)
	{
		arr[i] = 0;
		i++;
	}
	ft_recur(arr, &cnt, 0);
	return (cnt);
}
/*
#include <stdio.h>
int main(void)
{
	int cnt;
	cnt = ft_ten_queens_puzzle();
	ft_putchar('\n');
	printf("%d", cnt);	
}*/
