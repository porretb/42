/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:00:32 by bporret           #+#    #+#             */
/*   Updated: 2022/06/20 10:33:42 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <string.h>
void	ft_putchar(char c)
{
	write(1 , &c, 1);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*void	ft_putstr(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		ft_putchar(src[i]);
		i++;
	}
}*/

/*int	main(void)
{
	char source[] = "nop";
	char destination[10];
	
	ft_strcpy(destination, source);
	ft_putstr(destination);
	ft_putchar('\n');
}*/
