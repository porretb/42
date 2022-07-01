/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:10:50 by bporret           #+#    #+#             */
/*   Updated: 2022/06/20 10:49:43 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	test1[] = "abc";
	char	test2[] = "ABV";
	char	test3[] = "";
	int		x;

	x = ft_str_is_uppercase(test1);
	printf("%d\n", x);
	x = ft_str_is_uppercase(test2);
	printf("%d\n", x);
	x = ft_str_is_uppercase(test3);
	printf("%d\n", x);
}*/
