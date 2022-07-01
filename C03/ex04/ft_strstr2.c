/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:16:01 by bporret           #+#    #+#             */
/*   Updated: 2022/06/21 15:32:44 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
			if (to_find != 0)
			{
				if (to_find[z] == str[i])
					return (to_find);
				z++;
			}
			z = 0;
			return (0);
		}
		i++;
		return (str);
	}
	return (0);
}

int	main(void)
{
	char	maphrase[] = "Cette fois yen a asse";
	char	jechercheca[] = "f";

	printf("%s\n", ft_strstr(maphrase, jechercheca));
}
