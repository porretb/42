/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeur.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:28:00 by bporret           #+#    #+#             */
/*   Updated: 2022/06/15 11:40:12 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);
void	ft_putnchar(char c, int i);

int	maint(void)
{
	char *ptr;
	int i;

	i = 0;
	ptr = "MiniMyNemo";
	ft_putnchar(ptr, i);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnchar(char c, int i)
{
	while (c > i)
	{
		ft_putchar(c);
		ft_putchar('\n');
		i++;
	}
}

