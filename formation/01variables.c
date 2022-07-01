/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01variables.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:44:46 by bporret           #+#    #+#             */
/*   Updated: 2022/06/16 12:33:34 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	char b;

	a = 42;
	b = 42;//b est de type char, il sera affiche comme le 42 nombres de la table ascii donc * 
	printf("hello %d World %c\n", a, b);
	a = 10;
	printf("hello %d World %c\n", a, b);
}
