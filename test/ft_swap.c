/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 06:57:31 by bporret           #+#    #+#             */
/*   Updated: 2022/06/14 12:04:31 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	*a;
	int *b;
	int c;
	int d;

	d = 10;
	c = 10;
	a = &c;
	b = &d;
	*a = 42;
	*b = 21;
	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
