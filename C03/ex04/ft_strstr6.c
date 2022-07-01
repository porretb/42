/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:16:01 by bporret           #+#    #+#             */
/*   Updated: 2022/06/22 12:22:54 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			printf("%d'j'\n", j);
			printf("%d'i'\n", i);
			printf("%d'i+j'\n", i + j);
			printf("%c'str'\n", str[i + j]);
			printf("%c'find'\n", to_find[j]);
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	maphrase[] = "Bonjour";
	char	jechercheca[] = "jour";

	printf("%s\n", ft_strstr(maphrase, jechercheca));
	printf("%s\n", strstr(maphrase, jechercheca));
}
