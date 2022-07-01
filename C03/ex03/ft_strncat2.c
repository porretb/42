/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:28:42 by bporret           #+#    #+#             */
/*   Updated: 2022/06/21 14:02:32 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0' && x < nb)
		x++;
	if (x < nb)
		dest[x] = '\0';
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
		if (y < nb)
			src[y] = '\0';
	}
	return (dest);
}

int	main(void)
{
	char source[] = "4 ans deja ca se fete !!!";
	char destination[] = "He voila mon petit coeur";

	printf("%s", ft_strncat(destination, source, 5));
	return (0);
}
