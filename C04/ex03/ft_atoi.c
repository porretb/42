/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:30:19 by bporret           #+#    #+#             */
/*   Updated: 2022/06/26 17:00:01 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	resultat;

	i = 0;
	neg = 1;
	resultat = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		resultat = resultat * 10 + (str[i] - 48);
		i++;
	}
	return (resultat * neg);
}

/*int	main(void)
{
	char	str[] = "   ----++---+-123456af125";

	printf("%d\n", ft_atoi(str));
	strcpy(str, "  -++-++125fas");
	val = atoi(str);
	printf("%d\n", val);
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
