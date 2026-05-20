/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbrbase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumei <mumei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:16:03 by mumei             #+#    #+#             */
/*   Updated: 2026/05/20 18:49:02 by mumei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_char(char c)
{
	write(1, &c, 1);
}
static char	change(int n, int type)
{
	char	base[16] = "0123456789abcdef";
	char	base_upper[16] = "0123456789ABCDEF";

	if (type == -1)
		return (base[n]);
	if (type == 1)
		return (base_upper[n]);
	return (NULL);
}
void	ft_putnbr_base(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n / i >= 16)
		i *= 16;
	while (i > 0)
	{
		put_char(change(n / i, -1));
		n %= i;
		i /= 16;
	}
	put_char('\n');
}

void	ft_putnbr_bace_upper(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n / i >= 16)
		i *= 16;
	while (i > 0)
	{
		put_char(change(n / i, 1));
		n %= i;
		i /= 16;
	}
	put_char('\n');
}

// int	main(void)
// {
// 	return (0);
// }
