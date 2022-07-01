/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:22:44 by bporret           #+#    #+#             */
/*   Updated: 2022/06/14 16:54:48 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 10;
	d = 2;
	a = &c;
	b = &d;
	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;	
}
