/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 05:15:59 by bporret           #+#    #+#             */
/*   Updated: 2022/06/20 09:50:42 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (i < n)
	{
		i = 0;
		while (src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
	else if (i > n)
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (dest);
}

/*int	main(void)
{
	char 	phrase[] = "";
	char	destination[100];

	ft_strncpy(destination, phrase, 10);
	printf("%s\n", destination);
	//strncpy(destination, phrase, 24);
	//printf("%s\n", destination);
	return (0);
}*/
