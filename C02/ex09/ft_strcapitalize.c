/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:53:38 by bporret           #+#    #+#             */
/*   Updated: 2022/06/20 18:49:23 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && word == 1)
		{
			str[i] = str[i] - 32;
			word = 0;
		}	
		else if (str[i] >= 'A' && str[i] <= 'Z' && word == 0)
		{
			str[i] = str[i] + 32;
		}
		else if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
			word = 1;
		else
			word = 0;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*str2;

	printf("%s\n", str);
	str2 = ft_strcapitalize(str);
	printf("%s\n", str2);
	return (0);
}*/
