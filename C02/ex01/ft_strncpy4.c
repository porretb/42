/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 05:15:59 by bporret           #+#    #+#             */
/*   Updated: 2022/06/19 08:01:13 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;

	i = 0;
	while (src[i] !='\0')
	{
		i++;
	}
		i = 0;
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
		}

	return (dest);
	
}

int	main(void)
{
	char 	phrase[] = "Bonjour ma petite Alice";
	char	destination[100];

	//ft_strncpy(destination, phrase, 10);
	//printf("%s\n", destination);
	strncpy(destination, phrase, 10);
	printf("%s\n", destination);
	return (0);
}
