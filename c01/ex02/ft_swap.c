/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:40:06 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/12 11:58:40 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int a = 6;
	int b = 100;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
}*/