/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 06:47:35 by bporret           #+#    #+#             */
/*   Updated: 2022/06/09 12:16:11 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alpha;

	alpha = 97;
	while (alpha >= 97 && alpha <= 122)
	{
		write(1, &alpha, 1);
		alpha++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
