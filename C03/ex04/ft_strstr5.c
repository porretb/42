/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:16:01 by bporret           #+#    #+#             */
/*   Updated: 2022/06/22 10:02:23 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int flag;
	
	i = 0;
	j = 0;
	flag = 1;
	if (to_find == 0)
		return (0);
	while (str[i] != '\0')	
		{
		printf("%s", "h\n");
			while (to_find[j] != '\0' && str[i + j] != '\0')
			{
				printf("str[i +j]: %c, to_find[j]: %c\n", str[i + j], to_find[j]);
				if (str[i + j] != to_find[j])
				{
					flag = 0;
				}
				j++;
			}
			printf("flag is: %d\n", flag);
			if (flag) // tout ce qui est diff de 0 est true
				return (&str[i]);
			i++;
			j = 0;
		}
	if (flag == 0)
		return (0);
	return (str);
}

int	main(void)
{
	char	maphrase[] = "Bonjour";
	char	jechercheca[] = "jou";

	printf("%s\n", ft_strstr(maphrase, jechercheca));
	printf("%s\n", strstr(maphrase, jechercheca));
}
