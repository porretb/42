/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:16:01 by bporret           #+#    #+#             */
/*   Updated: 2022/06/22 06:58:19 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (str[i] != '\0')
	{
		while (to_find[z] != '\0')
		{
			if (str[i] == to_find[z])
			{
				i++;
				z++;
			}
			else
			{
				return (0);
			}
		}
		return (to_find);
	}
	if (to_find[z] == '\0')
	{
		return (str);
	}	
	return (0);
}

int	main(void)
{
	char	maphrase[] = "Bonjour";
	char	jechercheca[] = "j";

	printf("%s\n", ft_strstr(maphrase, jechercheca));
	printf("%s\n", strstr(maphrase, jechercheca));
}
