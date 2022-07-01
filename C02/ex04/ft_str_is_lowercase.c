/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:10:50 by bporret           #+#    #+#             */
/*   Updated: 2022/06/20 10:42:40 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	test1[] = "A123456";
	char	test2[] = "abcdeft";
	char	test3[] = "";
	int		x;

	x = ft_str_is_lowercase(test1);
	printf("%d\n", x);
	x = ft_str_is_lowercase(test2);
	printf("%d\n", x);
	x = ft_str_is_lowercase(test3);
	printf("%d\n", x);
}*/
