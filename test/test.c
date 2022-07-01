/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:37:39 by bporret           #+#    #+#             */
/*   Updated: 2022/06/13 15:30:06 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);
int	ft_nputchar(char c, int x);

int	main(void)
{
	int	i;

	i = '5';
	ft_putchar(i);
	i = '\n';
	ft_putchar(i);
	ft_putchar('b');
	ft_putchar('\n');
	ft_nputchar('h', 5);
	return (0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_nputchar(char c, int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		ft_putchar(c);
		i++;
	}
	return (0);
}
