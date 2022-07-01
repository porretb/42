/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:12:16 by bporret           #+#    #+#             */
/*   Updated: 2022/06/20 14:53:24 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <='z')
		{
			if (str[i] == str[0])
				str[i] = str[i] + 32;
			else
				i++;
		}	
		else if (str[i] >='A' && str[i] <= 'Z')
		{
		
		}
		else
			i++;
	}
	return (str);
}
