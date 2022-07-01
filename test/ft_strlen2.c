/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 09:00:59 by bporret           #+#    #+#             */
/*   Updated: 2022/06/16 15:54:08 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		i;

	str = "hello les boyz";
	i = ft_strlen(str);
	printf("%d", i);
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
