/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 06:39:38 by bporret           #+#    #+#             */
/*   Updated: 2022/06/17 06:43:19 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int nb;

	nb = 48;
	while (nb < 58)
	{
		write(1, &nb, 1);
		nb++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
