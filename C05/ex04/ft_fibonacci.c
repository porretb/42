/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:17:09 by bporret           #+#    #+#             */
/*   Updated: 2022/06/29 13:56:49 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_tab(int i)
{
	int n[i];
	
	if (i < 0 )
		return (-1);
	if (i == 0)
		return (0);
	if (i == 1)
		return (1);
	if (i > 1)
		return (n[i] = ft_tab(i - 1) + ft_tab(i - 2));
	return (0);
}*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}

/*int	main(void)
{
	int	x;

	x = 37;
	//ft_fibonacci(x);
	printf("%d", ft_fibonacci(x));
	return (0);
}*/
