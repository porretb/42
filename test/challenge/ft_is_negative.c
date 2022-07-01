/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 06:43:39 by bporret           #+#    #+#             */
/*   Updated: 2022/06/17 07:00:06 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N\n", 2);
	else if (n >= 0)
		write(1, "P\n", 2);
}

int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-9);
	ft_is_negative(a);
	return (0);
}
