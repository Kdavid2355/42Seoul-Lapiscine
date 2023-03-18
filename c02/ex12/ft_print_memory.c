/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:15:59 by beomjuki          #+#    #+#             */
/*   Updated: 2023/03/01 12:44:52 by beomjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ch_dec_to_hex(long long addr)
{
	if (addr > 15)
	{
		ft_ch_dec_to_hex(addr / 16);
		ft_ch_dec_to_hex(addr % 16);
	}
	else
		write(1, &"0123456789abcdef"[addr % 16], 1);
}

void	ft_make_hex(long long addr, int n)
{
	long long	tmp;

	tmp = addr;
	while (tmp)
	{
		tmp /= 16;
		++n;
	}
	tmp = 0;
	while (n + tmp < 16)
	{
		write(1, "0", 1);
		tmp++;
	}
	ft_ch_dec_to_hex(addr);
	write(1, ":", 1);
}

void	ft_print_str(unsigned char *addr, unsigned int length)
{
	int		i;

	i = 0;
	while ((unsigned int)i < length)
	{
		if (32 <= *(addr + i) && *(addr + i) < 127)
			write(1, addr + i, 1);
		else
			write(1, ".", 1);
		++i;
	}
}

void	ft_print_char_to_hex(unsigned char *addr, unsigned int length)
{
	int		i;

	i = 0;
	while ((unsigned int)i < length)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, &"0123456789abcdef"[addr[i] / 16], 1);
		write(1, &"0123456789abcdef"[addr[i] % 16], 1);
		++i;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		++i;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	length;
	int				i;

	i = 0;
	while (size)
	{
		if (size / 16)
			length = 16;
		else
			length = size;
		ft_make_hex((long long)addr + i, 0);
		ft_print_char_to_hex(addr + i, length);
		write(1, " ", 1);
		ft_print_str(addr + i, length);
		write(1, "\n", 1);
		size -= length;
		i += 16;
	}
	return (addr);
}
