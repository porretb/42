/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushfini.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:14:46 by bporret           #+#    #+#             */
/*   Updated: 2022/06/11 20:50:23 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_hb(void);
{
	int	x;
	int	y;
	int	nbx;
	int	nby;

	nbx = 5;
	nby = 4;
	x = nbx - 1;
	y = nby - 1;
	write(1, "o", 1);
	while (x > 1)
	{
		write(1, "-", 1);
		x--;
	}
	if (x == 1)
	{
		write(1, "o\n", 1);
	}
}
int	ft_mi(void);
{
	int	x;
	int	y;
	int	nbx;
	int	nby;

	nbx = 5;
	nby = 4;
	x = nbx - 1;
	y = nby - 1;
	while (y > 1)
	{
		write(1, "|", 1);
		while (x > 1)
		{
			write(1, " ", 1);
			x--;
		}
		if (x == 1)
		{
			write(1, "|\n", 1);
		}
		y--;
	}
}

int	main(void)
{
	int ft_hb();
	int ft_mi();

	if (nbx > 0 && nby > 0)
	{
		ft_hb();
		ft_mi();
		ft_hb();
	}
}
