/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeurtableau.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:24 by bporret           #+#    #+#             */
/*   Updated: 2022/06/16 11:05:20 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	fct(int *a);

int	main(void)
{
	int a;

	a = 42;
	printf("%d\n", a);
	fct(&a);
	printf("%d\n", a);
	return (0);
}

void	fct(int *a)
{
	*a = *a + 42;
}
