/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 08:38:07 by bporret           #+#    #+#             */
/*   Updated: 2022/06/29 13:58:46 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (power < 0)
		return (0);
	if (power < 1)
		return (1);
	while (i <= power)
	{
		resultat = resultat * nb;
		i++;
	}
	return (resultat);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 3;
	power = 5;
	ft_putnbr(ft_iterative_power(nb, power));
	return (0);
}*/
