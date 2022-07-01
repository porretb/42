/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:28:09 by bporret           #+#    #+#             */
/*   Updated: 2022/06/14 06:38:35 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_putchar(int x);

int	main(void)
{
	int	a;
	int	*nbr;

	nbr = &a;
	ft_ft(nbr);
	printf("%d", *nbr);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_putchar(int x)
{
	write(1, &x, 1);
}
