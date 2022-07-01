/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableaupointeur.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:05:36 by bporret           #+#    #+#             */
/*   Updated: 2022/06/16 11:38:00 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr( int nb);

int	main(void)
{
	int nb;

	nb = 0;
	ft_putnbr(42);
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb);
{
	
}
