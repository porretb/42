/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:54:20 by bporret           #+#    #+#             */
/*   Updated: 2022/06/24 14:27:28 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	ft_putchar('0' + n / 100000000);
	n = n % 100000000;
	ft_putchar('0' + n / 10000000);
	n = n % 10000000;
	ft_putchar('0' + n / 1000000);
	n = n % 1000000;
	ft_putchar('0' + n / 100000);
	n = n % 100000;
	ft_putchar('0' + n / 10000);
	n = n % 10000;
	ft_putchar('0' + n / 1000);
	n = n % 1000;
	ft_putchar('0' + n / 100);
	n = n % 100;
	ft_putchar('0' + n / 10);
	ft_putchar('0' + n / 10);
}

void	ft_ultimate_ft(int *****nbr)
{
	*****nbr = 12545;
}

int	main(void)
{
	int nb;
	int *nb1;
	int **nb2;
	int ***nb3;
	int ****nb4;
	int *****nb5;

	nb = 6;
	nb1 = &nb;
	nb2 = &nb1;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;

	ft_ultimate_ft(nb5);
	ft_putnbr(nb);
	return (0);
}
