/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:59:45 by beomjuki          #+#    #+#             */
/*   Updated: 2023/02/12 12:06:58 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void) {
	int div1;
	int mod1;
	ft_div_mod(258, 10, &div1, &mod1);
	printf("%d, %d", div1, mod1);
	return 0;
}*/
