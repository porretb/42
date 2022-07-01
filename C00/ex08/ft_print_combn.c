/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:10:42 by bporret           #+#    #+#             */
/*   Updated: 2022/06/30 16:29:09 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int nb;

	nb = 0;
	while (n > 0 && n < 10 && nb <= n)
	{
		ft_putchar('0' + nb / 10);
		ft_putchar('0' + nb % 10);
		ft_putchar(',');
		nb++;
	}
	ft_putchar(0);	
}

int	main(int argc, char **argv)
{
	int nb;
	(void) argc;
	nb = atoi(argv[1]);
	ft_print_combn(nb);
	return (0);
}
