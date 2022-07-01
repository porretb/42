/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:37:54 by bporret           #+#    #+#             */
/*   Updated: 2022/06/29 14:01:00 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb < 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnb(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnb(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

int	main(void)
{
	int	nb;

	nb = 5;
	ft_putnb(ft_recursive_factorial(nb));
	return (0);
}*/
