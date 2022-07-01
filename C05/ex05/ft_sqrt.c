/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:01:28 by bporret           #+#    #+#             */
/*   Updated: 2022/06/29 16:45:18 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (nb != i * i)
	{
		i++;
		if (nb < 0)
			return (0);
		if (i > (nb / 2 + 1))
			return (0);
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
	int	nb;

	(void) argc;
	nb = atoi(argv[1]);
	printf("%d", ft_sqrt(nb));
	return (0);
}*/
