/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:05:38 by bporret           #+#    #+#             */
/*   Updated: 2022/06/13 18:45:48 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putcharx(char *k)
{
	write(1, k, sizeof(k));
}
int	main(void)
{
	
	ft_putcharx("Salut la compagnie de 42");
	return (0);
}


