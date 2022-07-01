/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:14:46 by bporret           #+#    #+#             */
/*   Updated: 2022/06/12 11:25:03 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);

void	ft_hb(int x, int y)
{
	int	nbx;
	int	nby;

	nbx = x - 1;
	if (x > 0 && y > 0)
	ft_putchar('o');
	if (nbx == 0)
	{
		ft_putchar('\n');
	}
	else
	{
		while (nbx > 1)
		{
			ft_putchar('-');
			nbx--;
		}
		if (nbx == 1)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
	}
}
void	ft_mi(int x, int y)
{
	int	nbx;
	int	nby;

	nbx = x - 1;
	nby = y - 1;
	if (x > 0 && y > 0)
	ft_putchar('|');
	while (nby > 1)
	{
		if (nby == 1)
		{
			ft_putchar('|');
			ft_putchar('\n');
		}
		else
		{
			while (nbx > 1)
			{
				ft_putchar(' ');
				nbx--;
				if (nbx == 1)
				{
					ft_putchar('|');
					ft_putchar('\n');
				}
			}
		}
	nby--;
	//nbx = x - 1;
	}
}

void	rush(int x,int y)
{
	
	if (y >= 1)
	{	
	ft_hb(x, y);
	ft_mi(x, y);
	}
	if (y >=2)
	{
	ft_hb(x, y);
	}
}
