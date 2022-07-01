/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenultimate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:26:23 by bporret           #+#    #+#             */
/*   Updated: 2022/06/16 17:58:35 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	char *str;
	int		i;

	str = "salut a toi le frerot?";
	i = ft_strlen(str);
	printf("%d\n", i);
	return (0);
}

int	ft_strlen(char *str)
{
	int 	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
