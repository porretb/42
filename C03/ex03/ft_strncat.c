/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:28:42 by bporret           #+#    #+#             */
/*   Updated: 2022/06/26 14:08:02 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0' && y < nb)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	source[] = " 4 ans deja ca se fete !!!";
	char	destination[200] = "He voila mon petit coeur";

	//printf("%s\n", ft_strncat(destination, source, 50));	
	printf("%s\n", strncat(destination, source, 50));
	return (0);
}*/
