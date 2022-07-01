/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:31:03 by bporret           #+#    #+#             */
/*   Updated: 2022/06/20 12:54:54 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			i++;
		else if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		else
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char	c[] = "Ajfasddf212";
	char	*d;
	d = ft_strupcase(c);
	printf("%s", d);
}*/
