/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 10:43:33 by bporret           #+#    #+#             */
/*   Updated: 2022/06/18 12:11:36 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*char	*ft_strcpy(char *dest, char *src)
{
	
}*/

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
void	ft_replace(char *phrase)
{
	*phrase = 'H';
}

int	main(void)
{
	char phrase[] = "hello World";
	
	ft_putstr(phrase);
	ft_putchar('\n');
	ft_replace(phrase);
	ft_putstr(phrase);
	return (0);
}
