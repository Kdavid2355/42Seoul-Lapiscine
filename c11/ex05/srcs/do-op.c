/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:09:16 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/27 19:52:09 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include <unistd.h>

int	ft_operate(int n1, char p, int n2)
{
	int		ans;
	int		(*operator[5])(int, int);

	operator[0] = ft_add;
	operator[1] = ft_minus;
	operator[2] = ft_multi;
	operator[3] = ft_divid;
	operator[4] = ft_modul;
	ans = 0;
	if (p == '+')
		ans = operator[0](n1, n2);
	else if (p == '-')
		ans = operator[1](n1, n2);
	else if (p == '*')
		ans = operator[2](n1, n2);
	else if (p == '/')
		ans = operator[3](n1, n2);
	else if (p == '%')
		ans = operator[4](n1, n2);
	return (ans);
}

void	check_operator(char *n1, char *p, char *n2)
{	
	int		num1;
	int		num2;
	int		ans;
	char	pm;

	pm = *p;
	num1 = ft_atoi(n1);
	num2 = ft_atoi(n2);
	if ((pm != '+') && (pm != '-') && (pm != '%') && (pm != '*') && (pm != '/'))
		write(1, "0", 1);
	else if ((pm == '/') && num2 == 0)
		write(1, "Stop : division by zero", 23);
	else if ((pm == '%') && num2 == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		ans = ft_operate(num1, pm, num2);
		ft_putnbr(ans);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		check_operator(av[1], av[2], av[3]);
	return (0);
}
