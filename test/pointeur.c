/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:59:40 by bporret           #+#    #+#             */
/*   Updated: 2022/06/13 20:16:07 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ptr2(void);
void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	*nbr;

	a = 42;
	nbr = &a;
	printf("%p\n", nbr);
	printf("%d\n", *nbr);
	*nbr = 84;
	printf("%d\n", a);
	ft_ptr2();
	ft_ft();
}

int	ft_ptr2(void)
{
	int	a;
	int	*nbr;
	int	**nbr2;
	int	***nbr3;

	a = 21;
	nbr = &a;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	printf("%d\n", ***nbr3);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
