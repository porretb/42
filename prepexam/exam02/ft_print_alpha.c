/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:29:30 by bporret           #+#    #+#             */
/*   Updated: 2022/06/24 08:35:15 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a >= 'a' && a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}

