/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coeur.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:52:05 by bporret           #+#    #+#             */
/*   Updated: 2022/06/26 09:41:02 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_boomrush(unsigned int nb)
{
	unsigned int	i;
	char	*str;

	i = 0;
	while (nb > i)
	{
		if (nb >= '0' && nb <= '9')
		*str = nb + 48;
		i++;
	}
	return (str);
}
