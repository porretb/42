/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:20:58 by bporret           #+#    #+#             */
/*   Updated: 2022/06/30 11:28:37 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	tab[i] = size;
	while (i > 0)
	{
		tab[i] = i - 1;
		i++;
	}

}

int	main(void)
{
	int tableau[10];
	int size;
	int	i;

	i = 0;
	size = 12;
	tableau[i] = 1;
	ft_rev_int_tab(tableau, size);
	while (i < size)
	{
		printf("%d\n", tableau[i]);
		i++;
	}
	return (0);
}
