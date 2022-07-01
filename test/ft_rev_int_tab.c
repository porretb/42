/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 09:28:35 by bporret           #+#    #+#             */
/*   Updated: 2022/06/16 16:20:21 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	*tab;
	int size;

	tab = 1;
	size = 0;
	ft_rev_int_tab(tab, size);
	return (0);
}

void	ft_rev_int_tab(int	*tab, int size)
{
	int i;
	
	size = 0;
	while (tab[size])
	{
		size++;
	}
	i = size;
	return (i);
}
