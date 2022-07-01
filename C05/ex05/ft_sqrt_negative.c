/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:01:28 by bporret           #+#    #+#             */
/*   Updated: 2022/06/29 16:25:13 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (nb != i * i)
	{
		i++;
		if (nb < 0)
		{
			nb = nb * -1;
			nb = ft_sqrt(nb);
			return (nb * -1);
		}
		if (i > (nb / 2 + 1))
			return (0);
	}
	return (i);
}

/*int	main(void)
{
	int	nb;

	nb = 2147395600;
	printf("%d", ft_sqrt(nb));
	return (0);
}*/
