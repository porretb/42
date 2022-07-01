/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 06:20:15 by bporret           #+#    #+#             */
/*   Updated: 2022/06/17 06:34:39 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
}

void	ft_print_alphabet(void)
{
	int	a;

	a = 97;
	while (a < 123)
	{
		write(1, &a, 1);
		a++;
	}
}

