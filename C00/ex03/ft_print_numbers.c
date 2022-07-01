/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:33:10 by bporret           #+#    #+#             */
/*   Updated: 2022/06/09 11:00:40 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	chiffre;

	chiffre = 48;
	while (chiffre >= 48 && chiffre <= 57)
	{
		write(1, &chiffre, 1);
		chiffre++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
