/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:13:50 by bporret           #+#    #+#             */
/*   Updated: 2022/06/21 08:53:02 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	phrase1[] = "salut";
	char	phrase2[] = "salut";

	printf("%d", ft_strcmp(phrase1, phrase2));
}*/
