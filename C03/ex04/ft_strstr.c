/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:16:01 by bporret           #+#    #+#             */
/*   Updated: 2022/06/25 08:09:17 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find [y])
		{
			if (to_find[y + 1] == '\0')
			{
				return (&str[x]);
			}
			y++;
		}
		x++;
	}
	return (0);
}

/*int	main(void)
{
	char	maphrase[] = "Bla bli clou";
	char	jechercheca[] = "li c";

	printf("%s\n", ft_strstr(maphrase, jechercheca));
	printf("%s\n", strstr(maphrase, jechercheca));
}*/
