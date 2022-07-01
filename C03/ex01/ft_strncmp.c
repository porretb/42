/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 08:54:43 by bporret           #+#    #+#             */
/*   Updated: 2022/06/27 14:45:48 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char			x[] = "testtest";
	char			y[] = "testtest";
	unsigned int	z;

	z = 8;
	printf("%d\n", ft_strncmp(x, y, z));
	//printf("%d\n", strncmp(x, y, z));
	return (0);
}*/
